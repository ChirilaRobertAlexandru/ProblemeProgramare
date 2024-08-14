using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        string first = "";
        string second = "";
        char function;
        double result = 0.0;
        string userInput = "";

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
                   
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Display.Text = "";
            userInput += '1';
            Display.Text += userInput;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Display.Text = "";
            userInput += '2';
            Display.Text += userInput;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Display.Text = "";
            userInput += '3';
            Display.Text += userInput;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            Display.Text = "";
            userInput += '4';
            Display.Text += userInput;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Display.Text = "";
            userInput += '5';
            Display.Text += userInput;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            Display.Text = "";
            userInput += '6';
            Display.Text += userInput;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            Display.Text = "";
            userInput += '7';
            Display.Text += userInput;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            Display.Text = "";
            userInput += '8';
            Display.Text += userInput;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            Display.Text = "";
            userInput += '9';
            Display.Text += userInput;
        }

        private void button0_Click(object sender, EventArgs e)
        {
            Display.Text = "";
            userInput += '0';
            Display.Text += userInput;
        }

        private void dotButton_Click(object sender, EventArgs e)
        {
            Display.Text += '.';
        }

        private void equalButton_Click(object sender, EventArgs e)
        {
            second = userInput;
            double f_num, s_num;
            f_num = Convert.ToDouble(first);
            s_num = Convert.ToDouble(second);

            if (function == '+')
            {
                result = f_num + s_num;
                Display.Text = Convert.ToString(result);
            }
            else
                if(function == '-')
                {
                    result = f_num - s_num;
                    Display.Text = Convert.ToString(result);
                }
                else
                    if (function == '*')
                    {
                        result = f_num * s_num;
                        Display.Text = Convert.ToString(result);
                    }
                else
                    if(function == '/')
                    {
                        if(s_num != 0)
                        {
                            result = f_num / s_num;
                            Display.Text = Convert.ToString(result);
                        }
                        else
                        { 
                            result = 0;
                        Display.Text = Convert.ToString(result);
                        }
                    }
        }

        private void plusButton_Click(object sender, EventArgs e)
        {
            function = '+';
            first = userInput;
            userInput = "";
        }

        private void minusButton_Click(object sender, EventArgs e)
        {
            function = '-';
        }

        private void multipliButton_Click(object sender, EventArgs e)
        {
            function = '*';
        }

        private void divideButton_Click(object sender, EventArgs e)
        {
            function = '/';
        }

        private void clearButton_Click(object sender, EventArgs e)
        {
            function = '\0';
            first = "";
            second = "";
            userInput = "";
            result = 0.0;
            Display.Text = "0";
        }
    }
}
