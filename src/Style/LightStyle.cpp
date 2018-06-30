// Copyright (c) 2015-2017, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Newton is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Newton is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Newton.  If not, see <http://www.gnu.org/licenses/>.

#include "LightStyle.h"

namespace WalletGui {

LightStyle::LightStyle() : Style("light", "Light") {

}

QString LightStyle::statusBarBackgroundColor() const {
  return  "#e7e7e7"; // "#eeffcc"; "#CADEF7";
}

QString LightStyle::statusBarFontColor() const {
  return "#000000"; // "#2A4268";
}

QString LightStyle::headerBackgroundColor() const {
  return "#e7e7e7"; // "#eeffcc"; "#EDF4FC";
}

QString LightStyle::headerBorderColor() const {
  return "#dddddd";
}

QString LightStyle::addressFontColor() const {
  return "#000000"; // "#2A4268";
}

QString LightStyle::balanceFontColor() const {
  return "#000000"; // "#601f60"; "#2A4268";
}

QString LightStyle::toolButtonBackgroundColorNormal() const {
  return "#edf0f7"; // "#f8ecf8"; "#DFECFC";
}

QString LightStyle::toolButtonBackgroundColorHover() const {
  return "#d1deeb"; // "#ecc6ec"; "#C1D5ED";
}

QString LightStyle::toolButtonBackgroundColorPressed() const {
  return "#5f9cc7"; // "#cc66cc"; "#00A0E3";
}

QString LightStyle::toolButtonFontColorNormal() const {
  return "#000000"; // "#2E4469";
}

QString LightStyle::toolButtonFontColorDisabled() const {
  return "#4d000000"; // "#8C949E";
}

QString LightStyle::toolBarBorderColor() const {
  return "#dddddd";
}

QString LightStyle::getWalletSyncGifFile() const {
  return QString(":icons/light/wallet-sync");
}

QPixmap LightStyle::getLogoPixmap() const {
  return QPixmap(QString(":icons/light/logo"));
}

QPixmap LightStyle::getBalanceIcon() const {
  return QPixmap(QString(":icons/total_balance"));
}

QPixmap LightStyle::getConnectedIcon() const {
  return QPixmap(QString(":icons/light/connected"));
}

QPixmap LightStyle::getDisconnectedIcon() const {
  return QPixmap(QString(":icons/light/disconnected"));
}

QPixmap LightStyle::getEncryptedIcon() const {
  return QPixmap(QString(":icons/light/encrypted"));
}

QPixmap LightStyle::getNotEncryptedIcon() const {
  return QPixmap(QString(":icons/light/decrypted"));
}

QPixmap LightStyle::getSyncedIcon() const {
  return QPixmap(QString(":icons/light/synced"));
}

}
