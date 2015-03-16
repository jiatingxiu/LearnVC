using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Forms;
using System.Windows.Input;
using System.Windows.Interop;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace LearnWPF
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        public static event Action WpfLanguageChanged;
        BitmapSource _BitmapSource;

        public MainWindow()
        {
            _BitmapSource = CopyScreen();

            InitializeComponent();

            this.WindowState = System.Windows.WindowState.Maximized;
            this.WindowStyle = System.Windows.WindowStyle.None;
            this.ResizeMode = System.Windows.ResizeMode.NoResize;
            this.image.Source = _BitmapSource;

            this.Loaded += MainWindow_Loaded;

            Title = "SystemSetting";

            MyClass1 myClass1 = new MyClass1();
            MyClass2 myClass2 = new MyClass2();
            MyClass3 myClass3 = new MyClass3();
        }

        private void MainWindow_Loaded(object sender, RoutedEventArgs e)
        {
            var dpiProperty = typeof(SystemParameters).GetProperty("Dpi", BindingFlags.NonPublic | BindingFlags.Static);
            var dpi = dpiProperty == null ? 120 : (int)dpiProperty.GetValue(null, null);

            viewBox.Width = grid.ActualWidth * 98 / dpi;

            //System.Windows.Vector point = viewBox.TranslatePoint(new System.Windows.Point(), image) - new System.Windows.Point(-10, -10);
            CroppedBitmap croppedBitmap = new CroppedBitmap(_BitmapSource, new Int32Rect((int)((1920 - grid.ActualWidth) / 2 ), (int)((1080 - grid.ActualHeight) / 2 ), (int)(grid.ActualWidth ), (int)(grid.ActualHeight )));

            border.Background = new ImageBrush(croppedBitmap);
        }

        private static BitmapSource CopyScreen()
        {
            System.Windows.Forms.Screen[] screens = System.Windows.Forms.Screen.AllScreens;
            System.Windows.Forms.Screen PrimaryScreen = screens[0];
            if (!PrimaryScreen.Primary) return null;

            var width = PrimaryScreen.Bounds.Width;
            var height = PrimaryScreen.Bounds.Height;

            using (var screenBmp = new Bitmap(width, height, System.Drawing.Imaging.PixelFormat.Format32bppArgb))
            {
                using (var bmpGraphics = Graphics.FromImage(screenBmp))
                {
                    bmpGraphics.CopyFromScreen(0, 0, 0, 0, new System.Drawing.Size(width, height));
                    return Imaging.CreateBitmapSourceFromHBitmap(
                        screenBmp.GetHbitmap(),
                        IntPtr.Zero,
                        Int32Rect.Empty,
                        BitmapSizeOptions.FromEmptyOptions());
                }
            }
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            if (WpfLanguageChanged != null)
                WpfLanguageChanged();
        }
    }

    class MyClass1
    {
        public MyClass1()
        {
            MainWindow.WpfLanguageChanged += MainWindow_WpfLanguageChanged;
        }

        void MainWindow_WpfLanguageChanged()
        {

        }
    }

    class MyClass2
    {
        public MyClass2()
        {
            MainWindow.WpfLanguageChanged += MainWindow_WpfLanguageChanged;
        }

        void MainWindow_WpfLanguageChanged()
        {

        }
    }

    class MyClass3
    {
        public MyClass3()
        {
            MainWindow.WpfLanguageChanged += MainWindow_WpfLanguageChanged;
        }

        void MainWindow_WpfLanguageChanged()
        {

        }
    }
}
