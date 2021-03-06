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

#include "SecondaryRatUsageInfo.h"

namespace oai {
namespace smf {
namespace model {

SecondaryRatUsageInfo::SecondaryRatUsageInfo() {
  m_QosFlowsUsageDataIsSet   = false;
  m_PduSessionUsageDataIsSet = false;
}

SecondaryRatUsageInfo::~SecondaryRatUsageInfo() {}

void SecondaryRatUsageInfo::validate() {
  // TODO: implement validation
}

web::json::value SecondaryRatUsageInfo::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("secondaryRatType")] =
      ModelBase::toJson(m_SecondaryRatType);
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_QosFlowsUsageData) {
      jsonArray.push_back(ModelBase::toJson(item));
    }
    if (jsonArray.size() > 0) {
      val[utility::conversions::to_string_t("qosFlowsUsageData")] =
          web::json::value::array(jsonArray);
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_PduSessionUsageData) {
      jsonArray.push_back(ModelBase::toJson(item));
    }
    if (jsonArray.size() > 0) {
      val[utility::conversions::to_string_t("pduSessionUsageData")] =
          web::json::value::array(jsonArray);
    }
  }

  return val;
}

void SecondaryRatUsageInfo::fromJson(const web::json::value& val) {
  std::shared_ptr<RatType> newSecondaryRatType(new RatType());
  newSecondaryRatType->fromJson(
      val.at(utility::conversions::to_string_t("secondaryRatType")));
  setSecondaryRatType(newSecondaryRatType);
  {
    m_QosFlowsUsageData.clear();
    std::vector<web::json::value> jsonArray;
    if (val.has_field(utility::conversions::to_string_t("qosFlowsUsageData"))) {
      for (auto& item :
           val.at(utility::conversions::to_string_t("qosFlowsUsageData"))
               .as_array()) {
        if (item.is_null()) {
          m_QosFlowsUsageData.push_back(
              std::shared_ptr<QosFlowUsageReport>(nullptr));
        } else {
          std::shared_ptr<QosFlowUsageReport> newItem(new QosFlowUsageReport());
          newItem->fromJson(item);
          m_QosFlowsUsageData.push_back(newItem);
        }
      }
    }
  }
  {
    m_PduSessionUsageData.clear();
    std::vector<web::json::value> jsonArray;
    if (val.has_field(
            utility::conversions::to_string_t("pduSessionUsageData"))) {
      for (auto& item :
           val.at(utility::conversions::to_string_t("pduSessionUsageData"))
               .as_array()) {
        if (item.is_null()) {
          m_PduSessionUsageData.push_back(
              std::shared_ptr<VolumeTimedReport>(nullptr));
        } else {
          std::shared_ptr<VolumeTimedReport> newItem(new VolumeTimedReport());
          newItem->fromJson(item);
          m_PduSessionUsageData.push_back(newItem);
        }
      }
    }
  }
}

void SecondaryRatUsageInfo::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  m_SecondaryRatType->toMultipart(
      multipart, utility::conversions::to_string_t("secondaryRatType."));
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_QosFlowsUsageData) {
      jsonArray.push_back(ModelBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      multipart->add(ModelBase::toHttpContent(
          namePrefix + utility::conversions::to_string_t("qosFlowsUsageData"),
          web::json::value::array(jsonArray),
          utility::conversions::to_string_t("application/json")));
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_PduSessionUsageData) {
      jsonArray.push_back(ModelBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      multipart->add(ModelBase::toHttpContent(
          namePrefix + utility::conversions::to_string_t("pduSessionUsageData"),
          web::json::value::array(jsonArray),
          utility::conversions::to_string_t("application/json")));
    }
  }
}

void SecondaryRatUsageInfo::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  std::shared_ptr<RatType> newSecondaryRatType(new RatType());
  newSecondaryRatType->fromMultiPart(
      multipart, utility::conversions::to_string_t("secondaryRatType."));
  setSecondaryRatType(newSecondaryRatType);
  {
    m_QosFlowsUsageData.clear();
    if (multipart->hasContent(
            utility::conversions::to_string_t("qosFlowsUsageData"))) {
      web::json::value jsonArray = web::json::value::parse(
          ModelBase::stringFromHttpContent(multipart->getContent(
              utility::conversions::to_string_t("qosFlowsUsageData"))));
      for (auto& item : jsonArray.as_array()) {
        if (item.is_null()) {
          m_QosFlowsUsageData.push_back(
              std::shared_ptr<QosFlowUsageReport>(nullptr));
        } else {
          std::shared_ptr<QosFlowUsageReport> newItem(new QosFlowUsageReport());
          newItem->fromJson(item);
          m_QosFlowsUsageData.push_back(newItem);
        }
      }
    }
  }
  {
    m_PduSessionUsageData.clear();
    if (multipart->hasContent(
            utility::conversions::to_string_t("pduSessionUsageData"))) {
      web::json::value jsonArray = web::json::value::parse(
          ModelBase::stringFromHttpContent(multipart->getContent(
              utility::conversions::to_string_t("pduSessionUsageData"))));
      for (auto& item : jsonArray.as_array()) {
        if (item.is_null()) {
          m_PduSessionUsageData.push_back(
              std::shared_ptr<VolumeTimedReport>(nullptr));
        } else {
          std::shared_ptr<VolumeTimedReport> newItem(new VolumeTimedReport());
          newItem->fromJson(item);
          m_PduSessionUsageData.push_back(newItem);
        }
      }
    }
  }
}

std::shared_ptr<RatType> SecondaryRatUsageInfo::getSecondaryRatType() const {
  return m_SecondaryRatType;
}

void SecondaryRatUsageInfo::setSecondaryRatType(
    const std::shared_ptr<RatType>& value) {
  m_SecondaryRatType = value;
}

std::vector<std::shared_ptr<QosFlowUsageReport>>&
SecondaryRatUsageInfo::getQosFlowsUsageData() {
  return m_QosFlowsUsageData;
}

void SecondaryRatUsageInfo::setQosFlowsUsageData(
    const std::vector<std::shared_ptr<QosFlowUsageReport>>& value) {
  m_QosFlowsUsageData      = value;
  m_QosFlowsUsageDataIsSet = true;
}

bool SecondaryRatUsageInfo::qosFlowsUsageDataIsSet() const {
  return m_QosFlowsUsageDataIsSet;
}

void SecondaryRatUsageInfo::unsetQosFlowsUsageData() {
  m_QosFlowsUsageDataIsSet = false;
}

std::vector<std::shared_ptr<VolumeTimedReport>>&
SecondaryRatUsageInfo::getPduSessionUsageData() {
  return m_PduSessionUsageData;
}

void SecondaryRatUsageInfo::setPduSessionUsageData(
    const std::vector<std::shared_ptr<VolumeTimedReport>>& value) {
  m_PduSessionUsageData      = value;
  m_PduSessionUsageDataIsSet = true;
}

bool SecondaryRatUsageInfo::pduSessionUsageDataIsSet() const {
  return m_PduSessionUsageDataIsSet;
}

void SecondaryRatUsageInfo::unsetPduSessionUsageData() {
  m_PduSessionUsageDataIsSet = false;
}

}  // namespace model
}  // namespace smf
}  // namespace oai
