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

#include "GNbId.h"

namespace oai {
namespace smf {
namespace model {

GNbId::GNbId() {
  m_BitLength = 0;
  m_GNBValue  = utility::conversions::to_string_t("");
}

GNbId::~GNbId() {}

void GNbId::validate() {
  // TODO: implement validation
}

web::json::value GNbId::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("bitLength")] =
      ModelBase::toJson(m_BitLength);
  val[utility::conversions::to_string_t("gNBValue")] =
      ModelBase::toJson(m_GNBValue);

  return val;
}

void GNbId::fromJson(const web::json::value& val) {
  setBitLength(ModelBase::int32_tFromJson(
      val.at(utility::conversions::to_string_t("bitLength"))));
  setGNBValue(ModelBase::stringFromJson(
      val.at(utility::conversions::to_string_t("gNBValue"))));
}

void GNbId::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("bitLength"),
      m_BitLength));
  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("gNBValue"), m_GNBValue));
}

void GNbId::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  setBitLength(ModelBase::int32_tFromHttpContent(
      multipart->getContent(utility::conversions::to_string_t("bitLength"))));
  setGNBValue(ModelBase::stringFromHttpContent(
      multipart->getContent(utility::conversions::to_string_t("gNBValue"))));
}

int32_t GNbId::getBitLength() const {
  return m_BitLength;
}

void GNbId::setBitLength(int32_t value) {
  m_BitLength = value;
}

utility::string_t GNbId::getGNBValue() const {
  return m_GNBValue;
}

void GNbId::setGNBValue(const utility::string_t& value) {
  m_GNBValue = value;
}

}  // namespace model
}  // namespace smf
}  // namespace oai