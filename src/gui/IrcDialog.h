// Copyright (c) 2011-2015 The Cryptonote developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QDialog>

namespace Ui {
class IrcDialog;
}

namespace WalletGui {

class IrcDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(IrcDialog)

public:
  IrcDialog(QWidget* _parent);
  ~IrcDialog();

private:
  QScopedPointer<Ui::IrcDialog> m_ui;
};

}
