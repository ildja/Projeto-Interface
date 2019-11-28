#include "racas.h"
#include "ui_racas.h"
#include <QPixmap>

Racas::Racas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Racas)
{
    ui->setupUi(this);
    QPixmap imagem1("/home/ildja_user/Imagens/akita-1-768x432.jpg");
    ui->akila->setPixmap(imagem1.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem2("/home/ildja_user/Imagens/american-staffordshire-terrier-6.png");
    ui->america->setPixmap(imagem2.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem3("/home/ildja_user/Imagens/raça-de-cachorro-basset-768x512.png");
    ui->basset->setPixmap(imagem3.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem4("/home/ildja_user/Imagens/Beagle-6-768x576.jpg");
    ui->beagle->setPixmap(imagem4.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem5("/home/ildja_user/Imagens/bichon.jpg");
    ui->bichon->setPixmap(imagem5.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem6("/home/ildja_user/Imagens/boiadeiroaustraliano.jpg");
    ui->boiadeiro->setPixmap(imagem6.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem7("/home/ildja_user/Imagens/Border-Collie-2-768x576.jpg");
    ui->border->setPixmap(imagem7.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem8("/home/ildja_user/Imagens/Bostonterrier.jpg");
    ui->boston->setPixmap(imagem8.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem9("/home/ildja_user/Imagens/boxer.png");
    ui->boxer->setPixmap(imagem9.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem10("/home/ildja_user/Imagens/Buldogue-france.jpg");
    ui->buldogue->setPixmap(imagem10.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem11("/home/ildja_user/Imagens/buldogue-ingle.jpg");
    ui->bulldogueingles->setPixmap(imagem11.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem12("/home/ildja_user/Imagens/bullterrier.jpg");
    ui->bull->setPixmap(imagem12.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem13("/home/ildja_user/Imagens/cane_corso_preto-768x973.jpg");
    ui->cane->setPixmap(imagem13.scaled(100,100,Qt::KeepAspectRatio));

    QPixmap imagem14("/home/ildja_user/Imagens/cavalierking.jpg");
    ui->cavalier->setPixmap(imagem14.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem15("/home/ildja_user/Imagens/Chihuahua.jpg");
    ui->chihuahua->setPixmap(imagem15.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem16("/home/ildja_user/Imagens/Chow-Chow.jpg");
    ui->chowchow->setPixmap(imagem16.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem17("/home/ildja_user/Imagens/cockersapniel.jpg");
    ui->cocker->setPixmap(imagem17.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem18("/home/ildja_user/Imagens/dachshund.jpg");
    ui->dachshund->setPixmap(imagem18.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem19("/home/ildja_user/Imagens/dalmata.jpg");
    ui->dalmata->setPixmap(imagem19.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem20("/home/ildja_user/Imagens/doberman.jpg");
    ui->doberman->setPixmap(imagem20.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem21("/home/ildja_user/Imagens/dogo.jpg");
    ui->dogo->setPixmap(imagem21.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem22("/home/ildja_user/Imagens/doguealemao.jpg");
    ui->doguealemao->setPixmap(imagem22.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem23("/home/ildja_user/Imagens/fila_brasileiro3-768x512.jpg");
    ui->fila->setPixmap(imagem23.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem24("/home/ildja_user/Imagens/Golden-destaque-768x432.gif");
    ui->golden->setPixmap(imagem24.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem25("/home/ildja_user/Imagens/husky-siberiano-2-768x512.png");
    ui->husky->setPixmap(imagem25.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem26("/home/ildja_user/Imagens/jackrussell.jpg");
    ui->jack->setPixmap(imagem26.scaled(100,100,Qt::KeepAspectRatio));

    QPixmap imagem27("/home/ildja_user/Imagens/Labrador-6-768x576.jpg");
    ui->labrador->setPixmap(imagem27.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem28("/home/ildja_user/Imagens/Lhasa-6-768x576.jpg");
    ui->lhasa->setPixmap(imagem28.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem29("/home/ildja_user/Imagens/lulu.jpg");
    ui->lulu->setPixmap(imagem29.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem30("/home/ildja_user/Imagens/maltes.jpg");
    ui->maltes->setPixmap(imagem30.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem31("/home/ildja_user/Imagens/mastiff4-768x491.jpg");
    ui->mastiff->setPixmap(imagem31.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem32("/home/ildja_user/Imagens/mastim.jpg");
    ui->mastim->setPixmap(imagem32.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem33("/home/ildja_user/Imagens/pastoralemao.jpg");
    ui->pastoralemao->setPixmap(imagem33.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem34("/home/ildja_user/Imagens/pastorautraliano.jpg");
    ui->pastoraustraliano->setPixmap(imagem34.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem35("/home/ildja_user/Imagens/pastor-de-shetland-8-768x512.png");
    ui->pastorshetland->setPixmap(imagem35.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem36("/home/ildja_user/Imagens/maremano-5-768x514.jpg");
    ui->pastormaremano->setPixmap(imagem36.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem37("/home/ildja_user/Imagens/pequines.jpg");
    ui->pequines->setPixmap(imagem37.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem38("/home/ildja_user/Imagens/Pinscher-768x576.jpg");
    ui->pincher->setPixmap(imagem38.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem39("/home/ildja_user/Imagens/pit bull.jpg");
    ui->pit->setPixmap(imagem39.scaled(100,100,Qt::KeepAspectRatio));

    QPixmap imagem40("/home/ildja_user/Imagens/Poodle-4-768x576.jpg");
    ui->poodle->setPixmap(imagem1.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem41("/home/ildja_user/Imagens/pug.jpg");
    ui->pug->setPixmap(imagem2.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem42("/home/ildja_user/Imagens/rottweiler.jpg");
    ui->rottweiler->setPixmap(imagem3.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem43("/home/ildja_user/Imagens/Samoieda-2-768x512.jpg");
    ui->samoeida->setPixmap(imagem4.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem44("/home/ildja_user/Imagens/Schnauzer-2-768x576.jpg");
    ui->schnauzer->setPixmap(imagem5.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem45("/home/ildja_user/Imagens/shar.jpg");
    ui->shar->setPixmap(imagem6.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem46("/home/ildja_user/Imagens/shiba.jpg");
    ui->shiba->setPixmap(imagem7.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem47("/home/ildja_user/Imagens/shih-tzu-3-768x432.jpg");
    ui->shih->setPixmap(imagem8.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem48("/home/ildja_user/Imagens/staffordshire-na-grama-768x512.png");
    ui->staffordshire->setPixmap(imagem9.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem49("/home/ildja_user/Imagens/Terra-nova-2-768x512.jpg");
    ui->terra->setPixmap(imagem10.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem50("/home/ildja_user/Imagens/srd-768x511.jpg");
    ui->vira->setPixmap(imagem11.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem51("/home/ildja_user/Imagens/weimaraner.jpg");
    ui->weimaraner->setPixmap(imagem12.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem52("/home/ildja_user/Imagens/whippet-6-768x512.png");
    ui->wippet->setPixmap(imagem13.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap imagem53("/home/ildja_user/Imagens/yorkshire.jpg");
    ui->yorkshire->setPixmap(imagem13.scaled(100,100,Qt::KeepAspectRatio));


}

Racas::~Racas()
{
    delete ui;
}

void Racas::on_btn_akita_clicked()
{

}
