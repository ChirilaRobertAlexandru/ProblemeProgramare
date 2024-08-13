using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Button
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            int chech_number = 0;
            progressBar1.Minimum = 0;
            progressBar1.Maximum = 3;
            progressBar1.Value = 0;
            progressBar1.Step = 1;

            if (checkBox1.Checked)
            {
                chech_number++;
                progressBar1.PerformStep();
            }
            if (checkBox2.Checked)
            {
                chech_number++;
                progressBar1.PerformStep();
            }
            if (checkBox3.Checked)
            {
                chech_number++;
                progressBar1.PerformStep();
            }
            
            if (chech_number == 3)
            {
                MessageBox.Show("Ai acceptat toate cerintele.");
            }
            else
            {
                MessageBox.Show("Nu ai acceptat cerintele!");
            }
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {

        }
    }
}
