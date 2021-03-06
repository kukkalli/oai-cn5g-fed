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

#include "Ambr.h"

namespace oai {
namespace smf {
namespace model {

Ambr::Ambr() {
  m_Uplink   = utility::conversions::to_string_t("");
  m_Downlink = utility::conversions::to_string_t("");
}

Ambr::~Ambr() {}

void Ambr::validate() {
  // TODO: implement validation
}

web::json::value Ambr::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("uplink")] =
      ModelBase::toJson(m_Uplink);
  val[utility::conversions::to_string_t("downlink")] =
      ModelBase::toJson(m_Downlink);

  return val;
}

void Ambr::fromJson(const web::json::value& val) {
  setUplink(ModelBase::stringFromJson(
      val.at(utility::conversions::to_string_t("uplink"))));
  setDownlink(ModelBase::stringFromJson(
      val.at(utility::conversions::to_string_t("downlink"))));
}

void Ambr::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("uplink"), m_Uplink));
  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("downlink"), m_Downlink));
}

void Ambr::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  setUplink(ModelBase::stringFromHttpContent(
      multipart->getContent(utility::conversions::to_string_t("uplink"))));
  setDownlink(ModelBase::stringFromHttpContent(
      multipart->getContent(utility::conversions::to_string_t("downlink"))));
}

utility::string_t Ambr::getUplink() const {
  return m_Uplink;
}

void Ambr::setUplink(const utility::string_t& value) {
  m_Uplink = value;
}

utility::string_t Ambr::getDownlink() const {
  return m_Downlink;
}

void Ambr::setDownlink(const utility::string_t& value) {
  m_Downlink = value;
}

}  // namespace model
}  // namespace smf
}  // namespace oai
