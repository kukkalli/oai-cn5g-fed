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

#include "NrLocation.h"

namespace oai {
namespace smf {
namespace model {

NrLocation::NrLocation() {
  m_AgeOfLocationInformation      = 0;
  m_AgeOfLocationInformationIsSet = false;
  m_UeLocationTimestamp           = utility::datetime();
  m_UeLocationTimestampIsSet      = false;
  m_GeographicalInformation       = utility::conversions::to_string_t("");
  m_GeographicalInformationIsSet  = false;
  m_GeodeticInformation           = utility::conversions::to_string_t("");
  m_GeodeticInformationIsSet      = false;
  m_GlobalGnbIdIsSet              = false;
}

NrLocation::~NrLocation() {}

void NrLocation::validate() {
  // TODO: implement validation
}

web::json::value NrLocation::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("tai")]  = ModelBase::toJson(m_Tai);
  val[utility::conversions::to_string_t("ncgi")] = ModelBase::toJson(m_Ncgi);
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
  if (m_GlobalGnbIdIsSet) {
    val[utility::conversions::to_string_t("globalGnbId")] =
        ModelBase::toJson(m_GlobalGnbId);
  }

  return val;
}

void NrLocation::fromJson(const web::json::value& val) {
  std::shared_ptr<Tai> newTai(new Tai());
  newTai->fromJson(val.at(utility::conversions::to_string_t("tai")));
  setTai(newTai);
  std::shared_ptr<Ncgi> newNcgi(new Ncgi());
  newNcgi->fromJson(val.at(utility::conversions::to_string_t("ncgi")));
  setNcgi(newNcgi);
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
  if (val.has_field(utility::conversions::to_string_t("globalGnbId"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("globalGnbId"));
    if (!fieldValue.is_null()) {
      std::shared_ptr<GlobalRanNodeId> newItem(new GlobalRanNodeId());
      newItem->fromJson(fieldValue);
      setGlobalGnbId(newItem);
    }
  }
}

void NrLocation::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  m_Tai->toMultipart(multipart, utility::conversions::to_string_t("tai."));
  m_Ncgi->toMultipart(multipart, utility::conversions::to_string_t("ncgi."));
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
  if (m_GlobalGnbIdIsSet) {
    if (m_GlobalGnbId.get()) {
      m_GlobalGnbId->toMultipart(
          multipart, utility::conversions::to_string_t("globalGnbId."));
    }
  }
}

void NrLocation::fromMultiPart(
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
  std::shared_ptr<Ncgi> newNcgi(new Ncgi());
  newNcgi->fromMultiPart(multipart, utility::conversions::to_string_t("ncgi."));
  setNcgi(newNcgi);
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
  if (multipart->hasContent(utility::conversions::to_string_t("globalGnbId"))) {
    if (multipart->hasContent(
            utility::conversions::to_string_t("globalGnbId"))) {
      std::shared_ptr<GlobalRanNodeId> newItem(new GlobalRanNodeId());
      newItem->fromMultiPart(
          multipart, utility::conversions::to_string_t("globalGnbId."));
      setGlobalGnbId(newItem);
    }
  }
}

std::shared_ptr<Tai> NrLocation::getTai() const {
  return m_Tai;
}

void NrLocation::setTai(const std::shared_ptr<Tai>& value) {
  m_Tai = value;
}

std::shared_ptr<Ncgi> NrLocation::getNcgi() const {
  return m_Ncgi;
}

void NrLocation::setNcgi(const std::shared_ptr<Ncgi>& value) {
  m_Ncgi = value;
}

int32_t NrLocation::getAgeOfLocationInformation() const {
  return m_AgeOfLocationInformation;
}

void NrLocation::setAgeOfLocationInformation(int32_t value) {
  m_AgeOfLocationInformation      = value;
  m_AgeOfLocationInformationIsSet = true;
}

bool NrLocation::ageOfLocationInformationIsSet() const {
  return m_AgeOfLocationInformationIsSet;
}

void NrLocation::unsetAgeOfLocationInformation() {
  m_AgeOfLocationInformationIsSet = false;
}

utility::datetime NrLocation::getUeLocationTimestamp() const {
  return m_UeLocationTimestamp;
}

void NrLocation::setUeLocationTimestamp(const utility::datetime& value) {
  m_UeLocationTimestamp      = value;
  m_UeLocationTimestampIsSet = true;
}

bool NrLocation::ueLocationTimestampIsSet() const {
  return m_UeLocationTimestampIsSet;
}

void NrLocation::unsetUeLocationTimestamp() {
  m_UeLocationTimestampIsSet = false;
}

utility::string_t NrLocation::getGeographicalInformation() const {
  return m_GeographicalInformation;
}

void NrLocation::setGeographicalInformation(const utility::string_t& value) {
  m_GeographicalInformation      = value;
  m_GeographicalInformationIsSet = true;
}

bool NrLocation::geographicalInformationIsSet() const {
  return m_GeographicalInformationIsSet;
}

void NrLocation::unsetGeographicalInformation() {
  m_GeographicalInformationIsSet = false;
}

utility::string_t NrLocation::getGeodeticInformation() const {
  return m_GeodeticInformation;
}

void NrLocation::setGeodeticInformation(const utility::string_t& value) {
  m_GeodeticInformation      = value;
  m_GeodeticInformationIsSet = true;
}

bool NrLocation::geodeticInformationIsSet() const {
  return m_GeodeticInformationIsSet;
}

void NrLocation::unsetGeodeticInformation() {
  m_GeodeticInformationIsSet = false;
}

std::shared_ptr<GlobalRanNodeId> NrLocation::getGlobalGnbId() const {
  return m_GlobalGnbId;
}

void NrLocation::setGlobalGnbId(const std::shared_ptr<GlobalRanNodeId>& value) {
  m_GlobalGnbId      = value;
  m_GlobalGnbIdIsSet = true;
}

bool NrLocation::globalGnbIdIsSet() const {
  return m_GlobalGnbIdIsSet;
}

void NrLocation::unsetGlobalGnbId() {
  m_GlobalGnbIdIsSet = false;
}

}  // namespace model
}  // namespace smf
}  // namespace oai
