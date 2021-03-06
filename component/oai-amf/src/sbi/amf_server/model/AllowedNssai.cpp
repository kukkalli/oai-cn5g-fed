/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AllowedNssai.h"

namespace oai {
namespace amf {
namespace model {

AllowedNssai::AllowedNssai() {}

AllowedNssai::~AllowedNssai() {}

void AllowedNssai::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const AllowedNssai& o) {
  j                      = nlohmann::json();
  j["allowedSnssaiList"] = o.m_AllowedSnssaiList;
  j["accessType"]        = o.m_AccessType;
}

void from_json(const nlohmann::json& j, AllowedNssai& o) {
  j.at("allowedSnssaiList").get_to(o.m_AllowedSnssaiList);
  j.at("accessType").get_to(o.m_AccessType);
}

std::vector<AllowedSnssai>& AllowedNssai::getAllowedSnssaiList() {
  return m_AllowedSnssaiList;
}
AccessType AllowedNssai::getAccessType() const {
  return m_AccessType;
}
void AllowedNssai::setAccessType(AccessType const& value) {
  m_AccessType = value;
}

}  // namespace model
}  // namespace amf
}  // namespace oai
