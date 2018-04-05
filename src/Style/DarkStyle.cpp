// Copyright (c) 2015-2017, The Intrinsiccoin developers
//
// This file is part of Intrinsiccoin.
//
// Intrinsiccoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Intrinsiccoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Intrinsiccoin.  If not, see <http://www.gnu.org/licenses/>.

#include "DarkStyle.h"

namespace WalletGui {

DarkStyle::DarkStyle() : Style("dark", "Dark") {

}

QString DarkStyle::statusBarBackgroundColor() const {
  return "#330033"; //#202020
}

QString DarkStyle::statusBarFontColor() const {
  return "#ffffff"; 
}

QString DarkStyle::headerBackgroundColor() const {
  return "#202020";
}

QString DarkStyle::headerBorderColor() const {
  return "#202020";
}

QString DarkStyle::addressFontColor() const {
  return "#ffffff";
}

QString DarkStyle::balanceFontColor() const {
  return "#ffffff";
}

QString DarkStyle::toolButtonBackgroundColorNormal() const {
  return "#2e4558";
}

QString DarkStyle::toolButtonBackgroundColorHover() const {
  return "#253949";
}

QString DarkStyle::toolButtonBackgroundColorPressed() const {
  return "#1c2e3c";
}

QString DarkStyle::toolButtonFontColorNormal() const {
  return "#ffffff";
}

QString DarkStyle::toolButtonFontColorDisabled() const {
  return "#b2ffffff";
}

QString DarkStyle::toolBarBorderColor() const {
  return "#2e4558";
}

QString DarkStyle::getWalletSyncGifFile() const {
  return QString("C:/Users/alaa/source/repos/Newtonwallet/src/icons/wallet-sync.png");
}

QPixmap DarkStyle::getLogoPixmap() const {
  return QPixmap(QString("C:/Users/alaa/source/repos/Newtonwallet/src/icons/logo_bl.png"));
}

QPixmap DarkStyle::getBalanceIcon() const {
  return QPixmap(QString("C:/Users/alaa/source/repos/Newtonwallet/src/icons/balance.png"));
}

QPixmap DarkStyle::getConnectedIcon() const {
  return QPixmap(QString("C:/Users/alaa/source/repos/Newtonwallet/src/icons/connected.png"));
}

QPixmap DarkStyle::getDisconnectedIcon() const {
  return QPixmap(QString("C:/Users/alaa/source/repos/Newtonwallet/src/icons/disconnected.png"));
}

QPixmap DarkStyle::getEncryptedIcon() const {
  return QPixmap(QString("C:/Users/alaa/source/repos/Newtonwallet/src/icons/encrypted.png"));
}

QPixmap DarkStyle::getNotEncryptedIcon() const {
  return QPixmap(QString("C:/Users/alaa/source/repos/Newtonwallet/src/icons/decrypted.png"));
}

QPixmap DarkStyle::getSyncedIcon() const {
  return QPixmap(QString("C:/Users/alaa/source/repos/Newtonwallet/src/icons/synced.png"));
}

}
