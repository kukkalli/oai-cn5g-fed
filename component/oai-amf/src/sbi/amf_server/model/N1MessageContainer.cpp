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

#include "N1MessageContainer.h"

namespace oai {
namespace amf {
namespace model {

N1MessageContainer::N1MessageContainer() {
  m_NfId                   = "";
  m_NfIdIsSet              = false;
  m_ServiceInstanceId      = "";
  m_ServiceInstanceIdIsSet = false;
}

N1MessageContainer::~N1MessageContainer() {}

void N1MessageContainer::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const N1MessageContainer& o) {
  j                     = nlohmann::json();
  j["n1MessageClass"]   = o.m_N1MessageClass;
  j["n1MessageContent"] = o.m_N1MessageContent;
  if (o.nfIdIsSet()) j["nfId"] = o.m_NfId;
  if (o.serviceInstanceIdIsSet())
    j["serviceInstanceId"] = o.m_ServiceInstanceId;
}

void from_json(const nlohmann::json& j, N1MessageContainer& o) {
  j.at("n1MessageClass").get_to(o.m_N1MessageClass);
  j.at("n1MessageContent").get_to(o.m_N1MessageContent);
  if (j.find("nfId") != j.end()) {
    j.at("nfId").get_to(o.m_NfId);
    o.m_NfIdIsSet = true;
  }
  if (j.find("serviceInstanceId") != j.end()) {
    j.at("serviceInstanceId").get_to(o.m_ServiceInstanceId);
    o.m_ServiceInstanceIdIsSet = true;
  }
}

N1MessageClass N1MessageContainer::getN1MessageClass() const {
  return m_N1MessageClass;
}
void N1MessageContainer::setN1MessageClass(N1MessageClass const& value) {
  m_N1MessageClass = value;
}
RefToBinaryData N1MessageContainer::getN1MessageContent() const {
  return m_N1MessageContent;
}
void N1MessageContainer::setN1MessageContent(RefToBinaryData const& value) {
  m_N1MessageContent = value;
}
std::string N1MessageContainer::getNfId() const {
  return m_NfId;
}
void N1MessageContainer::setNfId(std::string const& value) {
  m_NfId      = value;
  m_NfIdIsSet = true;
}
bool N1MessageContainer::nfIdIsSet() const {
  return m_NfIdIsSet;
}
void N1MessageContainer::unsetNfId() {
  m_NfIdIsSet = false;
}
std::string N1MessageContainer::getServiceInstanceId() const {
  return m_ServiceInstanceId;
}
void N1MessageContainer::setServiceInstanceId(std::string const& value) {
  m_ServiceInstanceId      = value;
  m_ServiceInstanceIdIsSet = true;
}
bool N1MessageContainer::serviceInstanceIdIsSet() const {
  return m_ServiceInstanceIdIsSet;
}
void N1MessageContainer::unsetServiceInstanceId() {
  m_ServiceInstanceIdIsSet = false;
}

}  // namespace model
}  // namespace amf
}  // namespace oai
