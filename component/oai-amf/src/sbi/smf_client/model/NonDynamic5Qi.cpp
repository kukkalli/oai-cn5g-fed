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

#include "NonDynamic5Qi.h"

namespace oai {
namespace smf {
namespace model {

NonDynamic5Qi::NonDynamic5Qi() {
  m_PriorityLevel        = 0;
  m_PriorityLevelIsSet   = false;
  m_AverWindow           = 0;
  m_AverWindowIsSet      = false;
  m_MaxDataBurstVol      = 0;
  m_MaxDataBurstVolIsSet = false;
}

NonDynamic5Qi::~NonDynamic5Qi() {}

void NonDynamic5Qi::validate() {
  // TODO: implement validation
}

web::json::value NonDynamic5Qi::toJson() const {
  web::json::value val = web::json::value::object();

  if (m_PriorityLevelIsSet) {
    val[utility::conversions::to_string_t("priorityLevel")] =
        ModelBase::toJson(m_PriorityLevel);
  }
  if (m_AverWindowIsSet) {
    val[utility::conversions::to_string_t("averWindow")] =
        ModelBase::toJson(m_AverWindow);
  }
  if (m_MaxDataBurstVolIsSet) {
    val[utility::conversions::to_string_t("maxDataBurstVol")] =
        ModelBase::toJson(m_MaxDataBurstVol);
  }

  return val;
}

void NonDynamic5Qi::fromJson(const web::json::value& val) {
  if (val.has_field(utility::conversions::to_string_t("priorityLevel"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("priorityLevel"));
    if (!fieldValue.is_null()) {
      setPriorityLevel(ModelBase::int32_tFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("averWindow"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("averWindow"));
    if (!fieldValue.is_null()) {
      setAverWindow(ModelBase::int32_tFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("maxDataBurstVol"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("maxDataBurstVol"));
    if (!fieldValue.is_null()) {
      setMaxDataBurstVol(ModelBase::int32_tFromJson(fieldValue));
    }
  }
}

void NonDynamic5Qi::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  if (m_PriorityLevelIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("priorityLevel"),
        m_PriorityLevel));
  }
  if (m_AverWindowIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("averWindow"),
        m_AverWindow));
  }
  if (m_MaxDataBurstVolIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("maxDataBurstVol"),
        m_MaxDataBurstVol));
  }
}

void NonDynamic5Qi::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  if (multipart->hasContent(
          utility::conversions::to_string_t("priorityLevel"))) {
    setPriorityLevel(ModelBase::int32_tFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("priorityLevel"))));
  }
  if (multipart->hasContent(utility::conversions::to_string_t("averWindow"))) {
    setAverWindow(ModelBase::int32_tFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("averWindow"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("maxDataBurstVol"))) {
    setMaxDataBurstVol(ModelBase::int32_tFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("maxDataBurstVol"))));
  }
}

int32_t NonDynamic5Qi::getPriorityLevel() const {
  return m_PriorityLevel;
}

void NonDynamic5Qi::setPriorityLevel(int32_t value) {
  m_PriorityLevel      = value;
  m_PriorityLevelIsSet = true;
}

bool NonDynamic5Qi::priorityLevelIsSet() const {
  return m_PriorityLevelIsSet;
}

void NonDynamic5Qi::unsetPriorityLevel() {
  m_PriorityLevelIsSet = false;
}

int32_t NonDynamic5Qi::getAverWindow() const {
  return m_AverWindow;
}

void NonDynamic5Qi::setAverWindow(int32_t value) {
  m_AverWindow      = value;
  m_AverWindowIsSet = true;
}

bool NonDynamic5Qi::averWindowIsSet() const {
  return m_AverWindowIsSet;
}

void NonDynamic5Qi::unsetAverWindow() {
  m_AverWindowIsSet = false;
}

int32_t NonDynamic5Qi::getMaxDataBurstVol() const {
  return m_MaxDataBurstVol;
}

void NonDynamic5Qi::setMaxDataBurstVol(int32_t value) {
  m_MaxDataBurstVol      = value;
  m_MaxDataBurstVolIsSet = true;
}

bool NonDynamic5Qi::maxDataBurstVolIsSet() const {
  return m_MaxDataBurstVolIsSet;
}

void NonDynamic5Qi::unsetMaxDataBurstVol() {
  m_MaxDataBurstVolIsSet = false;
}

}  // namespace model
}  // namespace smf
}  // namespace oai
