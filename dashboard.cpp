#include "dashboard.h"
#include "ui_dashboard.h"

Dashboard::Dashboard(QWidget *parent) : QMainWindow(parent), ui(new Ui::Dashboard) {
    ui->setupUi(this);
}

Dashboard::~Dashboard() {
    delete ui;
}

void Dashboard::set_Index() {
 //http://www.youtube.com/watch?v=pQHFqp0NK4E

    //MAIN Box Data _and_ set
    QString d_growid = "na";
    QString d_plants = "na";
    QString d_strains = "na";
    QString d_breeder = "na";
    QString d_substrate = "na";

    ui->lbl_growid->setPlainText(d_growid);
    ui->lbl_plants->setPlainText(d_plants);
    ui->lbl_strains->setPlainText(d_strains);
    ui->lbl_breeder->setPlainText(d_breeder);
    ui->lbl_substrate->setPlainText(d_substrate);

    //START Box Data _and_ set
    QString d_start = "00/00/00";
    QString d_start_dvegi = "00";
    QString d_start_dflower = "00";

    ui->lbl_start_data->setPlainText(d_start);
    ui->lbl_start_dvegi->setPlainText(d_start_dvegi);
    ui->lbl_start_dflower->setPlainText(d_start_dflower);

    //REMAINING Box Data _and_ set
    QString d_current = "Day 00";
    QString d_rem_dvegi = "00";
    QString d_rem_dflower = "00";

    ui->lbl_rem_days->setPlainText(d_current);
    ui->lbl_rem_dvegi->setPlainText(d_rem_dvegi);
    ui->lbl_rem_dflower->setPlainText(d_rem_dflower);

    //TEMPERATURE Box Data _and_ set
    QString d_temperature = "00°C";
    QString d_temp_min = "00°C";
    QString d_temp_max = "00°C";

    ui->lbl_temp_data->setPlainText(d_temperature);
    ui->lbl_temp_min->setPlainText(d_temp_min);
    ui->lbl_temp_max->setPlainText(d_temp_max);

    //HUMIDITY Box Data _and_ set
    QString d_humidity = "00%";
    QString d_hum_min = "00%";
    QString d_hum_max = "00%";

    ui->lbl_hum_percent->setPlainText(d_humidity);
    ui->lbl_hum_min->setPlainText(d_hum_min);
    ui->lbl_hum_max->setPlainText(d_hum_max);

    //PH Box Data _and_ set
    QString d_ph = "0.0";
    QString d_ph_min = "0.0";
    QString d_ph_max = "0.0";

    ui->lbl_ph_data->setPlainText(d_ph);
    ui->lbl_ph_min->setPlainText(d_ph_min);
    ui->lbl_ph_max->setPlainText(d_ph_max);

    //EC Box Data _and_ set
    QString d_ec = "0.0S";
    QString d_ec_min = "0.0S";
    QString d_ec_max = "0.0S";

    ui->lbl_ec_data->setPlainText(d_ec);
    ui->lbl_ec_min->setPlainText(d_ec_min);
    ui->lbl_ec_max->setPlainText(d_ec_max);
}

void Dashboard::set_Data_1() {
 //http://www.youtube.com/watch?v=pQHFqp0NK4E

    //MAIN Box Data _and_ set
    QString d_growid = "01";
    QString d_plants = "5";
    QString d_strains = "L.S.D., G13xHaze, Jamaican Pearl";
    QString d_breeder = "Barney's Farm, Sensi Seeds";
    QString d_substrate = "Hydro";

    ui->lbl_growid->setPlainText(d_growid);
    ui->lbl_plants->setPlainText(d_plants);
    ui->lbl_strains->setPlainText(d_strains);
    ui->lbl_breeder->setPlainText(d_breeder);
    ui->lbl_substrate->setPlainText(d_substrate);

    //START Box Data _and_ set
    QString d_start = "04/20/14";
    QString d_start_dvegi = "35";
    QString d_start_dflower = "40";

    ui->lbl_start_data->setPlainText(d_start);
    ui->lbl_start_dvegi->setPlainText(d_start_dvegi);
    ui->lbl_start_dflower->setPlainText(d_start_dflower);

    //REMAINING Box Data _and_ set
    QString d_current = "Day 57";
    QString d_rem_dvegi = "00";
    QString d_rem_dflower = "18";

    ui->lbl_rem_days->setPlainText(d_current);
    ui->lbl_rem_dvegi->setPlainText(d_rem_dvegi);
    ui->lbl_rem_dflower->setPlainText(d_rem_dflower);

    //TEMPERATURE Box Data _and_ set
    QString d_temperature = "24°C";
    QString d_temp_min = "19°C";
    QString d_temp_max = "27°C";

    ui->lbl_temp_data->setPlainText(d_temperature);
    ui->lbl_temp_min->setPlainText(d_temp_min);
    ui->lbl_temp_max->setPlainText(d_temp_max);

    //HUMIDITY Box Data _and_ set
    QString d_humidity = "42%";
    QString d_hum_min = "42%";
    QString d_hum_max = "81%";

    ui->lbl_hum_percent->setPlainText(d_humidity);
    ui->lbl_hum_min->setPlainText(d_hum_min);
    ui->lbl_hum_max->setPlainText(d_hum_max);

    //PH Box Data _and_ set
    QString d_ph = "6.0";
    QString d_ph_min = "4.7";
    QString d_ph_max = "6.3";

    ui->lbl_ph_data->setPlainText(d_ph);
    ui->lbl_ph_min->setPlainText(d_ph_min);
    ui->lbl_ph_max->setPlainText(d_ph_max);

    //EC Box Data _and_ set
    QString d_ec = "1.8µS";
    QString d_ec_min = "0.6µS";
    QString d_ec_max = "2.0µS";

    ui->lbl_ec_data->setPlainText(d_ec);
    ui->lbl_ec_min->setPlainText(d_ec_min);
    ui->lbl_ec_max->setPlainText(d_ec_max);
}

void Dashboard::set_Data_2() {
    //MAIN Box Data _and_ set
    QString d_growid = "02";
    QString d_plants = "3";
    QString d_strains = "Sweet Lemon";
    QString d_breeder = "G&C Seeds";
    QString d_substrate = "Hydro";

    ui->lbl_growid->setPlainText(d_growid);
    ui->lbl_plants->setPlainText(d_plants);
    ui->lbl_strains->setPlainText(d_strains);
    ui->lbl_breeder->setPlainText(d_breeder);
    ui->lbl_substrate->setPlainText(d_substrate);

    //START Box Data _and_ set
    QString d_start = "04/20/14";
    QString d_start_dvegi = "35";
    QString d_start_dflower = "40";

    ui->lbl_start_data->setPlainText(d_start);
    ui->lbl_start_dvegi->setPlainText(d_start_dvegi);
    ui->lbl_start_dflower->setPlainText(d_start_dflower);

    //REMAINING Box Data _and_ set
    QString d_current = "Day 23";
    QString d_rem_dvegi = "12";
    QString d_rem_dflower = "40";

    ui->lbl_rem_days->setPlainText(d_current);
    ui->lbl_rem_dvegi->setPlainText(d_rem_dvegi);
    ui->lbl_rem_dflower->setPlainText(d_rem_dflower);

    //TEMPERATURE Box Data _and_ set
    QString d_temperature = "23°C";
    QString d_temp_min = "14°C";
    QString d_temp_max = "25°C";

    ui->lbl_temp_data->setPlainText(d_temperature);
    ui->lbl_temp_min->setPlainText(d_temp_min);
    ui->lbl_temp_max->setPlainText(d_temp_max);

    //HUMIDITY Box Data _and_ set
    QString d_humidity = "61%";
    QString d_hum_min = "54%";
    QString d_hum_max = "89%";

    ui->lbl_hum_percent->setPlainText(d_humidity);
    ui->lbl_hum_min->setPlainText(d_hum_min);
    ui->lbl_hum_max->setPlainText(d_hum_max);

    //PH Box Data _and_ set
    QString d_ph = "5.9";
    QString d_ph_min = "4.2";
    QString d_ph_max = "6.1";

    ui->lbl_ph_data->setPlainText(d_ph);
    ui->lbl_ph_min->setPlainText(d_ph_min);
    ui->lbl_ph_max->setPlainText(d_ph_max);

    //EC Box Data _and_ set
    QString d_ec = "1.7Sµ";
    QString d_ec_min = "0.4µS";
    QString d_ec_max = "2.3µS";

    ui->lbl_ec_data->setPlainText(d_ec);
    ui->lbl_ec_min->setPlainText(d_ec_min);
    ui->lbl_ec_max->setPlainText(d_ec_max);
}

void Dashboard::on_comboBox_currentIndexChanged(int index)
{
    switch(index) {
    case 0: set_Index(); break;
    case 1: set_Data_1(); break;
    case 2: set_Data_2(); break;
    default: ;
    }
}

void Dashboard::on_btn_close_clicked()
{
    close();
}

void Dashboard::on_btn_test_clicked()
{
    close();
}
