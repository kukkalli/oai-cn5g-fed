/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * CivicAddress.h
 *
 *
 */

#ifndef CivicAddress_H_
#define CivicAddress_H_

#include <nlohmann/json.hpp>
#include <string>

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class CivicAddress {
public:
  CivicAddress();
  virtual ~CivicAddress();

  void validate();

  /////////////////////////////////////////////
  /// CivicAddress members

  /// <summary>
  ///
  /// </summary>
  std::string getCountry() const;
  void setCountry(std::string const &value);
  bool countryIsSet() const;
  void unsetCountry();
  /// <summary>
  ///
  /// </summary>
  std::string getA1() const;
  void setA1(std::string const &value);
  bool a1IsSet() const;
  void unsetA1();
  /// <summary>
  ///
  /// </summary>
  std::string getA2() const;
  void setA2(std::string const &value);
  bool a2IsSet() const;
  void unsetA2();
  /// <summary>
  ///
  /// </summary>
  std::string getA3() const;
  void setA3(std::string const &value);
  bool a3IsSet() const;
  void unsetA3();
  /// <summary>
  ///
  /// </summary>
  std::string getA4() const;
  void setA4(std::string const &value);
  bool a4IsSet() const;
  void unsetA4();
  /// <summary>
  ///
  /// </summary>
  std::string getA5() const;
  void setA5(std::string const &value);
  bool a5IsSet() const;
  void unsetA5();
  /// <summary>
  ///
  /// </summary>
  std::string getA6() const;
  void setA6(std::string const &value);
  bool a6IsSet() const;
  void unsetA6();
  /// <summary>
  ///
  /// </summary>
  std::string getPRD() const;
  void setPRD(std::string const &value);
  bool pRDIsSet() const;
  void unsetPRD();
  /// <summary>
  ///
  /// </summary>
  std::string getPOD() const;
  void setPOD(std::string const &value);
  bool pODIsSet() const;
  void unsetPOD();
  /// <summary>
  ///
  /// </summary>
  std::string getSTS() const;
  void setSTS(std::string const &value);
  bool sTSIsSet() const;
  void unsetSTS();
  /// <summary>
  ///
  /// </summary>
  std::string getHNO() const;
  void setHNO(std::string const &value);
  bool hNOIsSet() const;
  void unsetHNO();
  /// <summary>
  ///
  /// </summary>
  std::string getHNS() const;
  void setHNS(std::string const &value);
  bool hNSIsSet() const;
  void unsetHNS();
  /// <summary>
  ///
  /// </summary>
  std::string getLMK() const;
  void setLMK(std::string const &value);
  bool lMKIsSet() const;
  void unsetLMK();
  /// <summary>
  ///
  /// </summary>
  std::string getLOC() const;
  void setLOC(std::string const &value);
  bool lOCIsSet() const;
  void unsetLOC();
  /// <summary>
  ///
  /// </summary>
  std::string getNAM() const;
  void setNAM(std::string const &value);
  bool nAMIsSet() const;
  void unsetNAM();
  /// <summary>
  ///
  /// </summary>
  std::string getPC() const;
  void setPC(std::string const &value);
  bool pCIsSet() const;
  void unsetPC();
  /// <summary>
  ///
  /// </summary>
  std::string getBLD() const;
  void setBLD(std::string const &value);
  bool bLDIsSet() const;
  void unsetBLD();
  /// <summary>
  ///
  /// </summary>
  std::string getUNIT() const;
  void setUNIT(std::string const &value);
  bool uNITIsSet() const;
  void unsetUNIT();
  /// <summary>
  ///
  /// </summary>
  std::string getFLR() const;
  void setFLR(std::string const &value);
  bool fLRIsSet() const;
  void unsetFLR();
  /// <summary>
  ///
  /// </summary>
  std::string getROOM() const;
  void setROOM(std::string const &value);
  bool rOOMIsSet() const;
  void unsetROOM();
  /// <summary>
  ///
  /// </summary>
  std::string getPLC() const;
  void setPLC(std::string const &value);
  bool pLCIsSet() const;
  void unsetPLC();
  /// <summary>
  ///
  /// </summary>
  std::string getPCN() const;
  void setPCN(std::string const &value);
  bool pCNIsSet() const;
  void unsetPCN();
  /// <summary>
  ///
  /// </summary>
  std::string getPOBOX() const;
  void setPOBOX(std::string const &value);
  bool pOBOXIsSet() const;
  void unsetPOBOX();
  /// <summary>
  ///
  /// </summary>
  std::string getADDCODE() const;
  void setADDCODE(std::string const &value);
  bool aDDCODEIsSet() const;
  void unsetADDCODE();
  /// <summary>
  ///
  /// </summary>
  std::string getSEAT() const;
  void setSEAT(std::string const &value);
  bool sEATIsSet() const;
  void unsetSEAT();
  /// <summary>
  ///
  /// </summary>
  std::string getRD() const;
  void setRD(std::string const &value);
  bool rDIsSet() const;
  void unsetRD();
  /// <summary>
  ///
  /// </summary>
  std::string getRDSEC() const;
  void setRDSEC(std::string const &value);
  bool rDSECIsSet() const;
  void unsetRDSEC();
  /// <summary>
  ///
  /// </summary>
  std::string getRDBR() const;
  void setRDBR(std::string const &value);
  bool rDBRIsSet() const;
  void unsetRDBR();
  /// <summary>
  ///
  /// </summary>
  std::string getRDSUBBR() const;
  void setRDSUBBR(std::string const &value);
  bool rDSUBBRIsSet() const;
  void unsetRDSUBBR();
  /// <summary>
  ///
  /// </summary>
  std::string getPRM() const;
  void setPRM(std::string const &value);
  bool pRMIsSet() const;
  void unsetPRM();
  /// <summary>
  ///
  /// </summary>
  std::string getPOM() const;
  void setPOM(std::string const &value);
  bool pOMIsSet() const;
  void unsetPOM();

  friend void to_json(nlohmann::json &j, const CivicAddress &o);
  friend void from_json(const nlohmann::json &j, CivicAddress &o);

protected:
  std::string m_Country;
  bool m_CountryIsSet;
  std::string m_A1;
  bool m_A1IsSet;
  std::string m_A2;
  bool m_A2IsSet;
  std::string m_A3;
  bool m_A3IsSet;
  std::string m_A4;
  bool m_A4IsSet;
  std::string m_A5;
  bool m_A5IsSet;
  std::string m_A6;
  bool m_A6IsSet;
  std::string m_PRD;
  bool m_PRDIsSet;
  std::string m_POD;
  bool m_PODIsSet;
  std::string m_STS;
  bool m_STSIsSet;
  std::string m_HNO;
  bool m_HNOIsSet;
  std::string m_HNS;
  bool m_HNSIsSet;
  std::string m_LMK;
  bool m_LMKIsSet;
  std::string m_LOC;
  bool m_LOCIsSet;
  std::string m_NAM;
  bool m_NAMIsSet;
  std::string m_PC;
  bool m_PCIsSet;
  std::string m_BLD;
  bool m_BLDIsSet;
  std::string m_UNIT;
  bool m_UNITIsSet;
  std::string m_FLR;
  bool m_FLRIsSet;
  std::string m_ROOM;
  bool m_ROOMIsSet;
  std::string m_PLC;
  bool m_PLCIsSet;
  std::string m_PCN;
  bool m_PCNIsSet;
  std::string m_POBOX;
  bool m_POBOXIsSet;
  std::string m_ADDCODE;
  bool m_ADDCODEIsSet;
  std::string m_SEAT;
  bool m_SEATIsSet;
  std::string m_RD;
  bool m_RDIsSet;
  std::string m_RDSEC;
  bool m_RDSECIsSet;
  std::string m_RDBR;
  bool m_RDBRIsSet;
  std::string m_RDSUBBR;
  bool m_RDSUBBRIsSet;
  std::string m_PRM;
  bool m_PRMIsSet;
  std::string m_POM;
  bool m_POMIsSet;
};

} // namespace oai::udr::model

#endif /* CivicAddress_H_ */
