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

#include "QosFlowReleaseRequestItem.h"

namespace oai {
namespace smf {
namespace model {

QosFlowReleaseRequestItem::QosFlowReleaseRequestItem() {
  m_Qfi                     = 0;
  m_QosRulesIsSet           = false;
  m_QosFlowDescriptionIsSet = false;
}

QosFlowReleaseRequestItem::~QosFlowReleaseRequestItem() {}

void QosFlowReleaseRequestItem::validate() {
  // TODO: implement validation
}

web::json::value QosFlowReleaseRequestItem::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("qfi")] = ModelBase::toJson(m_Qfi);
  if (m_QosRulesIsSet) {
    val[utility::conversions::to_string_t("qosRules")] =
        ModelBase::toJson(m_QosRules);
  }
  if (m_QosFlowDescriptionIsSet) {
    val[utility::conversions::to_string_t("qosFlowDescription")] =
        ModelBase::toJson(m_QosFlowDescription);
  }

  return val;
}

void QosFlowReleaseRequestItem::fromJson(const web::json::value& val) {
  setQfi(ModelBase::int32_tFromJson(
      val.at(utility::conversions::to_string_t("qfi"))));
  if (val.has_field(utility::conversions::to_string_t("qosRules"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("qosRules"));
    if (!fieldValue.is_null()) {
      setQosRules(ModelBase::stringFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("qosFlowDescription"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("qosFlowDescription"));
    if (!fieldValue.is_null()) {
      setQosFlowDescription(ModelBase::stringFromJson(fieldValue));
    }
  }
}

void QosFlowReleaseRequestItem::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("qfi"), m_Qfi));
  if (m_QosRulesIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("qosRules"),
        m_QosRules));
  }
  if (m_QosFlowDescriptionIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("qosFlowDescription"),
        m_QosFlowDescription));
  }
}

void QosFlowReleaseRequestItem::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  setQfi(ModelBase::int32_tFromHttpContent(
      multipart->getContent(utility::conversions::to_string_t("qfi"))));
  if (multipart->hasContent(utility::conversions::to_string_t("qosRules"))) {
    setQosRules(ModelBase::stringFromHttpContent(
        multipart->getContent(utility::conversions::to_string_t("qosRules"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("qosFlowDescription"))) {
    setQosFlowDescription(
        ModelBase::stringFromHttpContent(multipart->getContent(
            utility::conversions::to_string_t("qosFlowDescription"))));
  }
}

int32_t QosFlowReleaseRequestItem::getQfi() const {
  return m_Qfi;
}

void QosFlowReleaseRequestItem::setQfi(int32_t value) {
  m_Qfi = value;
}

utility::string_t QosFlowReleaseRequestItem::getQosRules() const {
  return m_QosRules;
}

void QosFlowReleaseRequestItem::setQosRules(const utility::string_t& value) {
  m_QosRules      = value;
  m_QosRulesIsSet = true;
}

bool QosFlowReleaseRequestItem::qosRulesIsSet() const {
  return m_QosRulesIsSet;
}

void QosFlowReleaseRequestItem::unsetQosRules() {
  m_QosRulesIsSet = false;
}

utility::string_t QosFlowReleaseRequestItem::getQosFlowDescription() const {
  return m_QosFlowDescription;
}

void QosFlowReleaseRequestItem::setQosFlowDescription(
    const utility::string_t& value) {
  m_QosFlowDescription      = value;
  m_QosFlowDescriptionIsSet = true;
}

bool QosFlowReleaseRequestItem::qosFlowDescriptionIsSet() const {
  return m_QosFlowDescriptionIsSet;
}

void QosFlowReleaseRequestItem::unsetQosFlowDescription() {
  m_QosFlowDescriptionIsSet = false;
}

}  // namespace model
}  // namespace smf
}  // namespace oai
