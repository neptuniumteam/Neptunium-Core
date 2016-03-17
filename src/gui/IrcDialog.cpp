// Copyright (c) 2011-2015 The Cryptonote developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "IrcDialog.h"
#include "CurrencyAdapter.h"
#include "Settings.h"

#include "ui_ircdialog.h"

namespace WalletGui {

IrcDialog::IrcDialog(QWidget* _parent) : QDialog(_parent), m_ui(new Ui::IrcDialog) {
  m_ui->setupUi(this);
  setWindowTitle(QString(tr("About %1 Wallet")).arg(CurrencyAdapter::instance().getCurrencyDisplayName()));
  QString aboutText = m_ui->m_aboutLabel->text();
  m_ui->m_aboutLabel->setText(aboutText.arg(GIT_REVISION));
}

IrcDialog::~IrcDialog() {
}
  
}
