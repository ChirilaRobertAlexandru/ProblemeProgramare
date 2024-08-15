using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace To_do_list
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        DataTable todoList = new DataTable();
        bool isEditing = false;
        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {
            if(isEditing)
            {
                todoList.Rows[dataGridView1.CurrentCell.RowIndex]["Titlu"] = textBox1.Text;
                todoList.Rows[dataGridView1.CurrentCell.RowIndex]["Descriere"] = textBox2.Text;
            }
            else 
            {
                todoList.Rows.Add(textBox1.Text,textBox2.Text);
            }
            textBox2.Text = "";
            textBox1.Text = "";
        }


        private void Form1_Load(object sender, EventArgs e)
        {
            todoList.Columns.Add("Titlu");
            todoList.Columns.Add("Descriere");

            dataGridView1.DataSource = todoList;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            isEditing = true;
            textBox1.Text = todoList.Rows[dataGridView1.CurrentCell.RowIndex].ItemArray[1].ToString();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                todoList.Rows[dataGridView1.CurrentCell.RowIndex].Delete();
            }
            catch (Exception ex)
            {
                Console.WriteLine("Error " + ex);
            }
        }
    }
}
