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

#include "Snssai.h"

namespace oai {
namespace smf {
namespace model {

Snssai::Snssai() {
  m_Sst     = 0;
  m_Sd      = utility::conversions::to_string_t("");
  m_SdIsSet = false;
}

Snssai::~Snssai() {}

void Snssai::validate() {
  // TODO: implement validation
}

web::json::value Snssai::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("sst")] = ModelBase::toJson(m_Sst);
  if (m_SdIsSet) {
    val[utility::conversions::to_string_t("sd")] = ModelBase::toJson(m_Sd);
  }

  return val;
}

void Snssai::fromJson(const web::json::value& val) {
  setSst(ModelBase::int32_tFromJson(
      val.at(utility::conversions::to_string_t("sst"))));
  if (val.has_field(utility::conversions::to_string_t("sd"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("sd"));
    if (!fieldValue.is_null()) {
      setSd(ModelBase::stringFromJson(fieldValue));
    }
  }
}

void Snssai::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("sst"), m_Sst));
  if (m_SdIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("sd"), m_Sd));
  }
}

void Snssai::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  setSst(ModelBase::int32_tFromHttpContent(
      multipart->getContent(utility::conversions::to_string_t("sst"))));
  if (multipart->hasContent(utility::conversions::to_string_t("sd"))) {
    setSd(ModelBase::stringFromHttpContent(
        multipart->getContent(utility::conversions::to_string_t("sd"))));
  }
}

int32_t Snssai::getSst() const {
  return m_Sst;
}

void Snssai::setSst(int32_t value) {
  m_Sst = value;
}

utility::string_t Snssai::getSd() const {
  return m_Sd;
}

void Snssai::setSd(const utility::string_t& value) {
  m_Sd      = value;
  m_SdIsSet = true;
}

bool Snssai::sdIsSet() const {
  return m_SdIsSet;
}

void Snssai::unsetSd() {
  m_SdIsSet = false;
}

}  // namespace model
}  // namespace smf
}  // namespace oai
