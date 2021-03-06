/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "EutraLocation.h"

namespace oai {
namespace smf {
namespace model {

EutraLocation::EutraLocation() {
  m_AgeOfLocationInformation      = 0;
  m_AgeOfLocationInformationIsSet = false;
  m_UeLocationTimestamp           = utility::datetime();
  m_UeLocationTimestampIsSet      = false;
  m_GeographicalInformation       = utility::conversions::to_string_t("");
  m_GeographicalInformationIsSet  = false;
  m_GeodeticInformation           = utility::conversions::to_string_t("");
  m_GeodeticInformationIsSet      = false;
  m_GlobalNgenbIdIsSet            = false;
}

EutraLocation::~EutraLocation() {}

void EutraLocation::validate() {
  // TODO: implement validation
}

web::json::value EutraLocation::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("tai")]  = ModelBase::toJson(m_Tai);
  val[utility::conversions::to_string_t("ecgi")] = ModelBase::toJson(m_Ecgi);
  if (m_AgeOfLocationInformationIsSet) {
    val[utility::conversions::to_string_t("ageOfLocationInformation")] =
        ModelBase::toJson(m_AgeOfLocationInformation);
  }
  if (m_UeLocationTimestampIsSet) {
    val[utility::conversions::to_string_t("ueLocationTimestamp")] =
        ModelBase::toJson(m_UeLocationTimestamp);
  }
  if (m_GeographicalInformationIsSet) {
    val[utility::conversions::to_string_t("geographicalInformation")] =
        ModelBase::toJson(m_GeographicalInformation);
  }
  if (m_GeodeticInformationIsSet) {
    val[utility::conversions::to_string_t("geodeticInformation")] =
        ModelBase::toJson(m_GeodeticInformation);
  }
  if (m_GlobalNgenbIdIsSet) {
    val[utility::conversions::to_string_t("globalNgenbId")] =
        ModelBase::toJson(m_GlobalNgenbId);
  }

  return val;
}

void EutraLocation::fromJson(const web::json::value& val) {
  std::shared_ptr<Tai> newTai(new Tai());
  newTai->fromJson(val.at(utility::conversions::to_string_t("tai")));
  setTai(newTai);
  std::shared_ptr<Ecgi> newEcgi(new Ecgi());
  newEcgi->fromJson(val.at(utility::conversions::to_string_t("ecgi")));
  setEcgi(newEcgi);
  if (val.has_field(
          utility::conversions::to_string_t("ageOfLocationInformation"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("ageOfLocationInformation"));
    if (!fieldValue.is_null()) {
      setAgeOfLocationInformation(ModelBase::int32_tFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("ueLocationTimestamp"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("ueLocationTimestamp"));
    if (!fieldValue.is_null()) {
      setUeLocationTimestamp(ModelBase::dateFromJson(fieldValue));
    }
  }
  if (val.has_field(
          utility::conversions::to_string_t("geographicalInformation"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("geographicalInformation"));
    if (!fieldValue.is_null()) {
      setGeographicalInformation(ModelBase::stringFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("geodeticInformation"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("geodeticInformation"));
    if (!fieldValue.is_null()) {
      setGeodeticInformation(ModelBase::stringFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("globalNgenbId"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("globalNgenbId"));
    if (!fieldValue.is_null()) {
      std::shared_ptr<GlobalRanNodeId> newItem(new GlobalRanNodeId());
      newItem->fromJson(fieldValue);
      setGlobalNgenbId(newItem);
    }
  }
}

void EutraLocation::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  m_Tai->toMultipart(multipart, utility::conversions::to_string_t("tai."));
  m_Ecgi->toMultipart(multipart, utility::conversions::to_string_t("ecgi."));
  if (m_AgeOfLocationInformationIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix +
            utility::conversions::to_string_t("ageOfLocationInformation"),
        m_AgeOfLocationInformation));
  }
  if (m_UeLocationTimestampIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("ueLocationTimestamp"),
        m_UeLocationTimestamp));
  }
  if (m_GeographicalInformationIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix +
            utility::conversions::to_string_t("geographicalInformation"),
        m_GeographicalInformation));
  }
  if (m_GeodeticInformationIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("geodeticInformation"),
        m_GeodeticInformation));
  }
  if (m_GlobalNgenbIdIsSet) {
    if (m_GlobalNgenbId.get()) {
      m_GlobalNgenbId->toMultipart(
          multipart, utility::conversions::to_string_t("globalNgenbId."));
    }
  }
}

void EutraLocation::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  std::shared_ptr<Tai> newTai(new Tai());
  newTai->fromMultiPart(multipart, utility::conversions::to_string_t("tai."));
  setTai(newTai);
  std::shared_ptr<Ecgi> newEcgi(new Ecgi());
  newEcgi->fromMultiPart(multipart, utility::conversions::to_string_t("ecgi."));
  setEcgi(newEcgi);
  if (multipart->hasContent(
          utility::conversions::to_string_t("ageOfLocationInformation"))) {
    setAgeOfLocationInformation(
        ModelBase::int32_tFromHttpContent(multipart->getContent(
            utility::conversions::to_string_t("ageOfLocationInformation"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("ueLocationTimestamp"))) {
    setUeLocationTimestamp(ModelBase::dateFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("ueLocationTimestamp"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("geographicalInformation"))) {
    setGeographicalInformation(
        ModelBase::stringFromHttpContent(multipart->getContent(
            utility::conversions::to_string_t("geographicalInformation"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("geodeticInformation"))) {
    setGeodeticInformation(
        ModelBase::stringFromHttpContent(multipart->getContent(
            utility::conversions::to_string_t("geodeticInformation"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("globalNgenbId"))) {
    if (multipart->hasContent(
            utility::conversions::to_string_t("globalNgenbId"))) {
      std::shared_ptr<GlobalRanNodeId> newItem(new GlobalRanNodeId());
      newItem->fromMultiPart(
          multipart, utility::conversions::to_string_t("globalNgenbId."));
      setGlobalNgenbId(newItem);
    }
  }
}

std::shared_ptr<Tai> EutraLocation::getTai() const {
  return m_Tai;
}

void EutraLocation::setTai(const std::shared_ptr<Tai>& value) {
  m_Tai = value;
}

std::shared_ptr<Ecgi> EutraLocation::getEcgi() const {
  return m_Ecgi;
}

void EutraLocation::setEcgi(const std::shared_ptr<Ecgi>& value) {
  m_Ecgi = value;
}

int32_t EutraLocation::getAgeOfLocationInformation() const {
  return m_AgeOfLocationInformation;
}

void EutraLocation::setAgeOfLocationInformation(int32_t value) {
  m_AgeOfLocationInformation      = value;
  m_AgeOfLocationInformationIsSet = true;
}

bool EutraLocation::ageOfLocationInformationIsSet() const {
  return m_AgeOfLocationInformationIsSet;
}

void EutraLocation::unsetAgeOfLocationInformation() {
  m_AgeOfLocationInformationIsSet = false;
}

utility::datetime EutraLocation::getUeLocationTimestamp() const {
  return m_UeLocationTimestamp;
}

void EutraLocation::setUeLocationTimestamp(const utility::datetime& value) {
  m_UeLocationTimestamp      = value;
  m_UeLocationTimestampIsSet = true;
}

bool EutraLocation::ueLocationTimestampIsSet() const {
  return m_UeLocationTimestampIsSet;
}

void EutraLocation::unsetUeLocationTimestamp() {
  m_UeLocationTimestampIsSet = false;
}

utility::string_t EutraLocation::getGeographicalInformation() const {
  return m_GeographicalInformation;
}

void EutraLocation::setGeographicalInformation(const utility::string_t& value) {
  m_GeographicalInformation      = value;
  m_GeographicalInformationIsSet = true;
}

bool EutraLocation::geographicalInformationIsSet() const {
  return m_GeographicalInformationIsSet;
}

void EutraLocation::unsetGeographicalInformation() {
  m_GeographicalInformationIsSet = false;
}

utility::string_t EutraLocation::getGeodeticInformation() const {
  return m_GeodeticInformation;
}

void EutraLocation::setGeodeticInformation(const utility::string_t& value) {
  m_GeodeticInformation      = value;
  m_GeodeticInformationIsSet = true;
}

bool EutraLocation::geodeticInformationIsSet() const {
  return m_GeodeticInformationIsSet;
}

void EutraLocation::unsetGeodeticInformation() {
  m_GeodeticInformationIsSet = false;
}

std::shared_ptr<GlobalRanNodeId> EutraLocation::getGlobalNgenbId() const {
  return m_GlobalNgenbId;
}

void EutraLocation::setGlobalNgenbId(
    const std::shared_ptr<GlobalRanNodeId>& value) {
  m_GlobalNgenbId      = value;
  m_GlobalNgenbIdIsSet = true;
}

bool EutraLocation::globalNgenbIdIsSet() const {
  return m_GlobalNgenbIdIsSet;
}

void EutraLocation::unsetGlobalNgenbId() {
  m_GlobalNgenbIdIsSet = false;
}

}  // namespace model
}  // namespace smf
}  // namespace oai
