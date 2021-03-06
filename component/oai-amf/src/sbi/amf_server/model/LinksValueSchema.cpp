/**
 * AUSF API
 * AUSF UE Authentication Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "LinksValueSchema.h"

namespace oai {
namespace amf {
namespace model {

LinksValueSchema::LinksValueSchema() {
  m_Href      = "";
  m_HrefIsSet = false;
}

LinksValueSchema::~LinksValueSchema() {}

void LinksValueSchema::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const LinksValueSchema& o) {
  j = nlohmann::json();
  if (o.hrefIsSet()) j["href"] = o.m_Href;
}

void from_json(const nlohmann::json& j, LinksValueSchema& o) {
  if (j.find("href") != j.end()) {
    j.at("href").get_to(o.m_Href);
    o.m_HrefIsSet = true;
  }
}

std::string LinksValueSchema::getHref() const {
  return m_Href;
}
void LinksValueSchema::setHref(std::string const& value) {
  m_Href      = value;
  m_HrefIsSet = true;
}
bool LinksValueSchema::hrefIsSet() const {
  return m_HrefIsSet;
}
void LinksValueSchema::unsetHref() {
  m_HrefIsSet = false;
}

}  // namespace model
}  // namespace amf
}  // namespace oai
