#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "collection.h"
#include "parents.h"
#include "operation.h"
#include "ingridient.h"
#include "QString"

#define name_of_enter_file "C:\\Users\\Alexandr\\Desktop\\input.txt"
#define name_of_out_file "C:\\Users\\Alexandr\\Desktop\\output.txt"

Collection collect;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_2->setVisible(false);
    ui->pushButton_7->setVisible(false);
    ui->label_25->setVisible(false);
    ui->lineEdit_36->setVisible(false);
    ui->lineEdit_11->setVisible(false);
    ui->lineEdit_12->setVisible(false);
    ui->lineEdit_13->setVisible(false);
    ui->lineEdit_14->setVisible(false);
    ui->lineEdit_15->setVisible(false);
    ui->lineEdit_16->setVisible(false);
    ui->lineEdit_17->setVisible(false);
    ui->lineEdit_18->setVisible(false);
    ui->lineEdit_19->setVisible(false);
    ui->lineEdit_20->setVisible(false);
    ui->lineEdit_21->setVisible(false);
    ui->lineEdit_22->setVisible(false);
    ui->lineEdit_23->setVisible(false);
    ui->lineEdit_24->setVisible(false);
    ui->lineEdit_25->setVisible(false);
    ui->lineEdit_26->setVisible(false);
    ui->lineEdit_27->setVisible(false);
    ui->lineEdit_28->setVisible(false);
    ui->lineEdit_29->setVisible(false);
    ui->lineEdit_30->setVisible(false);
    ui->lineEdit_31->setVisible(false);
    ui->lineEdit_32->setVisible(false);
    ui->lineEdit_33->setVisible(false);
    ui->lineEdit_34->setVisible(false);
    ui->lineEdit_35->setVisible(false);
    ui->label_23->setVisible(false);
    ui->label_24->setVisible(false);
    ui->label_26->setVisible(false);
    ui->label_27->setVisible(false);
    ui->label_28->setVisible(false);
    ui->lineEdit_37->setVisible(false);
    ui->lineEdit_38->setVisible(false);
    ui->lineEdit_39->setVisible(false);
    ui->lineEdit_40->setVisible(false);
    ui->lineEdit_41->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->label_6->setVisible(false);
    ui->lineEdit_9->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->lineEdit_10->setVisible(false);
    ui->pushButton_6->setVisible(false);
    ui->label_7->setVisible(false);
    ui->label_8->setVisible(false);
    ui->label_9->setVisible(false);
    ui->label_10->setVisible(false);
    ui->label_11->setVisible(false);
    ui->label_12->setVisible(false);
    ui->label_13->setVisible(false);
    ui->label_14->setVisible(false);
    ui->label_15->setVisible(false);
    ui->label_16->setVisible(false);
    ui->lineEdit_2->setVisible(false);


}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()                    //считывание из файла
{
    collect.read_from_file(name_of_enter_file);
    ui->lineEdit->setText("Done");
    ui->pushButton_2->setVisible(true);
    ui->pushButton_2->setVisible(true);
    ui->lineEdit_3->setVisible(true);
    ui->pushButton_7->setVisible(true);
    ui->label_25->setVisible(true);
    ui->lineEdit_36->setVisible(true);
    ui->lineEdit_11->setVisible(true);
    ui->lineEdit_12->setVisible(true);
    ui->lineEdit_13->setVisible(true);
    ui->lineEdit_14->setVisible(true);
    ui->lineEdit_15->setVisible(true);
    ui->lineEdit_16->setVisible(true);
    ui->lineEdit_17->setVisible(true);
    ui->lineEdit_18->setVisible(true);
    ui->lineEdit_19->setVisible(true);
    ui->lineEdit_20->setVisible(true);
    ui->lineEdit_21->setVisible(true);
    ui->lineEdit_22->setVisible(true);
    ui->lineEdit_23->setVisible(true);
    ui->lineEdit_24->setVisible(true);
    ui->lineEdit_25->setVisible(true);
    ui->lineEdit_26->setVisible(true);
    ui->lineEdit_27->setVisible(true);
    ui->lineEdit_28->setVisible(true);
    ui->lineEdit_29->setVisible(true);
    ui->lineEdit_30->setVisible(true);
    ui->lineEdit_31->setVisible(true);
    ui->lineEdit_32->setVisible(true);
    ui->lineEdit_33->setVisible(true);
    ui->lineEdit_34->setVisible(true);
    ui->lineEdit_35->setVisible(true);
    ui->label_23->setVisible(true);
    ui->label_24->setVisible(true);
    ui->label_26->setVisible(true);
    ui->label_27->setVisible(true);
    ui->label_28->setVisible(true);
    ui->lineEdit_37->setVisible(true);
    ui->lineEdit_38->setVisible(true);
    ui->lineEdit_39->setVisible(true);
    ui->lineEdit_40->setVisible(true);
    ui->lineEdit_41->setVisible(true);
    ui->pushButton_4->setVisible(true);
    ui->label_6->setVisible(true);
    ui->lineEdit_9->setVisible(true);
    ui->pushButton_5->setVisible(true);
    ui->lineEdit_10->setVisible(true);
    ui->pushButton_6->setVisible(true);
    ui->label_7->setVisible(true);
    ui->label_8->setVisible(true);
    ui->label_9->setVisible(true);
    ui->label_10->setVisible(true);
    ui->label_11->setVisible(true);
    ui->label_12->setVisible(true);
    ui->label_13->setVisible(true);
    ui->label_14->setVisible(true);
    ui->label_15->setVisible(true);
    ui->label_16->setVisible(true);
    ui->lineEdit_2->setVisible(true);
}


void MainWindow::on_pushButton_2_clicked()                  // запись в файл
{
    collect.write_to_file(name_of_out_file);
    ui->lineEdit_2->setText("Done");
}

void MainWindow::on_pushButton_3_clicked()                  //добавление элемента
{
    auto name_of_ingridient = ui->lineEdit_3->text().toStdString();
    auto dimension_of_ingridient = ui->lineEdit_4->text().toStdString();
    auto quantity_of_ingridient = ui->lineEdit_5->text().toInt();
    auto name_of_operation = ui->lineEdit_6->text().toStdString();
    auto duration_of_operation = ui->lineEdit_7->text().toInt();
    Ingridient i(name_of_ingridient, dimension_of_ingridient, quantity_of_ingridient);
    Operation p(name_of_operation, duration_of_operation);
    collect.add_element(i, p);
    ui->lineEdit_8->setText("Done");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");
    ui->lineEdit_7->setText("");
    ui->pushButton_2->setVisible(true);
    ui->pushButton_2->setVisible(true);
    ui->lineEdit_3->setVisible(true);
    ui->pushButton_7->setVisible(true);
    ui->label_25->setVisible(true);
    ui->lineEdit_36->setVisible(true);
    ui->lineEdit_11->setVisible(true);
    ui->lineEdit_12->setVisible(true);
    ui->lineEdit_13->setVisible(true);
    ui->lineEdit_14->setVisible(true);
    ui->lineEdit_15->setVisible(true);
    ui->lineEdit_16->setVisible(true);
    ui->lineEdit_17->setVisible(true);
    ui->lineEdit_18->setVisible(true);
    ui->lineEdit_19->setVisible(true);
    ui->lineEdit_20->setVisible(true);
    ui->lineEdit_21->setVisible(true);
    ui->lineEdit_22->setVisible(true);
    ui->lineEdit_23->setVisible(true);
    ui->lineEdit_24->setVisible(true);
    ui->lineEdit_25->setVisible(true);
    ui->lineEdit_26->setVisible(true);
    ui->lineEdit_27->setVisible(true);
    ui->lineEdit_28->setVisible(true);
    ui->lineEdit_29->setVisible(true);
    ui->lineEdit_30->setVisible(true);
    ui->lineEdit_31->setVisible(true);
    ui->lineEdit_32->setVisible(true);
    ui->lineEdit_33->setVisible(true);
    ui->lineEdit_34->setVisible(true);
    ui->lineEdit_35->setVisible(true);
    ui->label_23->setVisible(true);
    ui->label_24->setVisible(true);
    ui->label_26->setVisible(true);
    ui->label_27->setVisible(true);
    ui->label_28->setVisible(true);
    ui->lineEdit_37->setVisible(true);
    ui->lineEdit_38->setVisible(true);
    ui->lineEdit_39->setVisible(true);
    ui->lineEdit_40->setVisible(true);
    ui->lineEdit_41->setVisible(true);
    ui->pushButton_4->setVisible(true);
    ui->label_6->setVisible(true);
    ui->lineEdit_9->setVisible(true);
    ui->pushButton_5->setVisible(true);
    ui->lineEdit_10->setVisible(true);
    ui->pushButton_6->setVisible(true);
    ui->label_7->setVisible(true);
    ui->label_8->setVisible(true);
    ui->label_9->setVisible(true);
    ui->label_10->setVisible(true);
    ui->label_11->setVisible(true);
    ui->label_12->setVisible(true);
    ui->label_13->setVisible(true);
    ui->label_14->setVisible(true);
    ui->label_15->setVisible(true);
    ui->label_16->setVisible(true);
    ui->lineEdit_2->setVisible(true);

}

void MainWindow::on_pushButton_4_clicked()                          // удаление элемента
{
    auto position = ui->lineEdit_9->text().toInt();
    if (position < 0 or position > collect.get_size() - 1)
        ui->lineEdit_9->setText("index is out of range");
    else
        ui->lineEdit_9->setText("Done");
        collect.del_element(position);
}

void MainWindow::on_pushButton_5_clicked()                          //удаление коллекции
{
    collect.del_all();
    ui->lineEdit_10->setText("Collection is clear");
    ui->pushButton_2->setVisible(false);
    ui->pushButton_7->setVisible(false);
    ui->label_25->setVisible(false);
    ui->lineEdit_36->setVisible(false);
    ui->lineEdit_11->setVisible(false);
    ui->lineEdit_12->setVisible(false);
    ui->lineEdit_13->setVisible(false);
    ui->lineEdit_14->setVisible(false);
    ui->lineEdit_15->setVisible(false);
    ui->lineEdit_16->setVisible(false);
    ui->lineEdit_17->setVisible(false);
    ui->lineEdit_18->setVisible(false);
    ui->lineEdit_19->setVisible(false);
    ui->lineEdit_20->setVisible(false);
    ui->lineEdit_21->setVisible(false);
    ui->lineEdit_22->setVisible(false);
    ui->lineEdit_23->setVisible(false);
    ui->lineEdit_24->setVisible(false);
    ui->lineEdit_25->setVisible(false);
    ui->lineEdit_26->setVisible(false);
    ui->lineEdit_27->setVisible(false);
    ui->lineEdit_28->setVisible(false);
    ui->lineEdit_29->setVisible(false);
    ui->lineEdit_30->setVisible(false);
    ui->lineEdit_31->setVisible(false);
    ui->lineEdit_32->setVisible(false);
    ui->lineEdit_33->setVisible(false);
    ui->lineEdit_34->setVisible(false);
    ui->lineEdit_35->setVisible(false);
    ui->label_23->setVisible(false);
    ui->label_24->setVisible(false);
    ui->label_26->setVisible(false);
    ui->label_27->setVisible(false);
    ui->label_28->setVisible(false);
    ui->lineEdit_37->setVisible(false);
    ui->lineEdit_38->setVisible(false);
    ui->lineEdit_39->setVisible(false);
    ui->lineEdit_40->setVisible(false);
    ui->lineEdit_41->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->label_6->setVisible(false);
    ui->lineEdit_9->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->lineEdit_10->setVisible(false);
    ui->pushButton_6->setVisible(false);
    ui->label_7->setVisible(false);
    ui->label_8->setVisible(false);
    ui->label_9->setVisible(false);
    ui->label_10->setVisible(false);
    ui->label_11->setVisible(false);
    ui->label_12->setVisible(false);
    ui->label_13->setVisible(false);
    ui->label_14->setVisible(false);
    ui->label_15->setVisible(false);
    ui->label_16->setVisible(false);
    ui->lineEdit_2->setVisible(false);
}

void MainWindow::on_pushButton_6_clicked()                          // вывод коллекции
{
    QString help_set;
   int k =0;
   ui->lineEdit_11->setText("");
   ui->lineEdit_12->setText("");
   ui->lineEdit_13->setText("");
   ui->lineEdit_14->setText("");
   ui->lineEdit_15->setText("");
   ui->lineEdit_16->setText("");
   ui->lineEdit_17->setText("");
   ui->lineEdit_18->setText("");
   ui->lineEdit_19->setText("");
   ui->lineEdit_20->setText("");
   ui->lineEdit_21->setText("");
   ui->lineEdit_22->setText("");
   ui->lineEdit_23->setText("");
   ui->lineEdit_24->setText("");
   ui->lineEdit_25->setText("");
   ui->lineEdit_26->setText("");
   ui->lineEdit_27->setText("");
   ui->lineEdit_28->setText("");
   ui->lineEdit_29->setText("");
   ui->lineEdit_30->setText("");
   ui->lineEdit_31->setText("");
   ui->lineEdit_32->setText("");
   ui->lineEdit_33->setText("");
   ui->lineEdit_34->setText("");
   ui->lineEdit_35->setText("");
   if (k < collect.get_size()){
    ui->lineEdit_11->setText(collect.get_ingridient_element(0).get_name().c_str());
    ui->lineEdit_12->setText(collect.get_ingridient_element(0).get_dimension().c_str());
    ui->lineEdit_13->setText(help_set.setNum(collect.get_ingridient_element(0).get_quantity()));
    ui->lineEdit_14->setText(collect.get_operation_element(0).get_name().c_str());
    ui->lineEdit_15->setText(help_set.setNum(collect.get_operation_element(0).get_duration()));
    k++;
   }
   if (k < collect.get_size()){
    ui->lineEdit_16->setText(collect.get_ingridient_element(1).get_name().c_str());
    ui->lineEdit_17->setText(collect.get_ingridient_element(1).get_dimension().c_str());
    ui->lineEdit_18->setText(help_set.setNum(collect.get_ingridient_element(1).get_quantity()));
    ui->lineEdit_19->setText(collect.get_operation_element(1).get_name().c_str());
    ui->lineEdit_20->setText(help_set.setNum(collect.get_operation_element(1).get_duration()));
    k++;
   }
   if (k < collect.get_size()){
    ui->lineEdit_21->setText(collect.get_ingridient_element(2).get_name().c_str());
    ui->lineEdit_22->setText(collect.get_ingridient_element(2).get_dimension().c_str());
    ui->lineEdit_23->setText(help_set.setNum(collect.get_ingridient_element(2).get_quantity()));
    ui->lineEdit_24->setText(collect.get_operation_element(2).get_name().c_str());
    ui->lineEdit_25->setText(help_set.setNum(collect.get_operation_element(2).get_duration()));
    k++;
   }
   if (k < collect.get_size()){
    ui->lineEdit_26->setText(collect.get_ingridient_element(3).get_name().c_str());
    ui->lineEdit_27->setText(collect.get_ingridient_element(3).get_dimension().c_str());
    ui->lineEdit_28->setText(help_set.setNum(collect.get_ingridient_element(3).get_quantity()));
    ui->lineEdit_29->setText(collect.get_operation_element(3).get_name().c_str());
    ui->lineEdit_30->setText(help_set.setNum(collect.get_operation_element(3).get_duration()));
    k++;
   }
   if (k < collect.get_size()){
    ui->lineEdit_31->setText(collect.get_ingridient_element(4).get_name().c_str());
    ui->lineEdit_32->setText(collect.get_ingridient_element(4).get_dimension().c_str());
    ui->lineEdit_33->setText(help_set.setNum(collect.get_ingridient_element(4).get_quantity()));
    ui->lineEdit_34->setText(collect.get_operation_element(4).get_name().c_str());
    ui->lineEdit_35->setText(help_set.setNum(collect.get_operation_element(4).get_duration()));
    k++;
   }
}

void MainWindow::on_pushButton_7_clicked()                              // вывод элемента на экран
{
    QString help_set;
    auto position = ui->lineEdit_36->text().toInt();
    if (position < 0 or position > collect.get_size() - 1)
        ui->lineEdit_36->setText("index is out of range");
    else{
    ui->lineEdit_37->setText(collect.get_ingridient_element(position).get_name().c_str());
    ui->lineEdit_38->setText(collect.get_ingridient_element(position).get_dimension().c_str());
    ui->lineEdit_39->setText(help_set.setNum(collect.get_ingridient_element(position).get_quantity()));
    ui->lineEdit_40->setText(collect.get_operation_element(position).get_name().c_str());
    ui->lineEdit_41->setText(help_set.setNum(collect.get_operation_element(position).get_duration()));
    }
}

