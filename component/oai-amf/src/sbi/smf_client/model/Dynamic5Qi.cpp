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

#include "Dynamic5Qi.h"

namespace oai {
namespace smf {
namespace model {

Dynamic5Qi::Dynamic5Qi() {
  m_PriorityLevel        = 0;
  m_PacketDelayBudget    = 0;
  m_PacketErrRate        = utility::conversions::to_string_t("");
  m_AverWindow           = 0;
  m_AverWindowIsSet      = false;
  m_MaxDataBurstVol      = 0;
  m_MaxDataBurstVolIsSet = false;
}

Dynamic5Qi::~Dynamic5Qi() {}

void Dynamic5Qi::validate() {
  // TODO: implement validation
}

web::json::value Dynamic5Qi::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("resourceType")] =
      ModelBase::toJson(m_ResourceType);
  val[utility::conversions::to_string_t("priorityLevel")] =
      ModelBase::toJson(m_PriorityLevel);
  val[utility::conversions::to_string_t("packetDelayBudget")] =
      ModelBase::toJson(m_PacketDelayBudget);
  val[utility::conversions::to_string_t("packetErrRate")] =
      ModelBase::toJson(m_PacketErrRate);
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

void Dynamic5Qi::fromJson(const web::json::value& val) {
  std::shared_ptr<QosResourceType> newResourceType(new QosResourceType());
  newResourceType->fromJson(
      val.at(utility::conversions::to_string_t("resourceType")));
  setResourceType(newResourceType);
  setPriorityLevel(ModelBase::int32_tFromJson(
      val.at(utility::conversions::to_string_t("priorityLevel"))));
  setPacketDelayBudget(ModelBase::int32_tFromJson(
      val.at(utility::conversions::to_string_t("packetDelayBudget"))));
  setPacketErrRate(ModelBase::stringFromJson(
      val.at(utility::conversions::to_string_t("packetErrRate"))));
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

void Dynamic5Qi::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  m_ResourceType->toMultipart(
      multipart, utility::conversions::to_string_t("resourceType."));
  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("priorityLevel"),
      m_PriorityLevel));
  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("packetDelayBudget"),
      m_PacketDelayBudget));
  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("packetErrRate"),
      m_PacketErrRate));
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

void Dynamic5Qi::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  std::shared_ptr<QosResourceType> newResourceType(new QosResourceType());
  newResourceType->fromMultiPart(
      multipart, utility::conversions::to_string_t("resourceType."));
  setResourceType(newResourceType);
  setPriorityLevel(ModelBase::int32_tFromHttpContent(multipart->getContent(
      utility::conversions::to_string_t("priorityLevel"))));
  setPacketDelayBudget(ModelBase::int32_tFromHttpContent(multipart->getContent(
      utility::conversions::to_string_t("packetDelayBudget"))));
  setPacketErrRate(ModelBase::stringFromHttpContent(multipart->getContent(
      utility::conversions::to_string_t("packetErrRate"))));
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

std::shared_ptr<QosResourceType> Dynamic5Qi::getResourceType() const {
  return m_ResourceType;
}

void Dynamic5Qi::setResourceType(
    const std::shared_ptr<QosResourceType>& value) {
  m_ResourceType = value;
}

int32_t Dynamic5Qi::getPriorityLevel() const {
  return m_PriorityLevel;
}

void Dynamic5Qi::setPriorityLevel(int32_t value) {
  m_PriorityLevel = value;
}

int32_t Dynamic5Qi::getPacketDelayBudget() const {
  return m_PacketDelayBudget;
}

void Dynamic5Qi::setPacketDelayBudget(int32_t value) {
  m_PacketDelayBudget = value;
}

utility::string_t Dynamic5Qi::getPacketErrRate() const {
  return m_PacketErrRate;
}

void Dynamic5Qi::setPacketErrRate(const utility::string_t& value) {
  m_PacketErrRate = value;
}

int32_t Dynamic5Qi::getAverWindow() const {
  return m_AverWindow;
}

void Dynamic5Qi::setAverWindow(int32_t value) {
  m_AverWindow      = value;
  m_AverWindowIsSet = true;
}

bool Dynamic5Qi::averWindowIsSet() const {
  return m_AverWindowIsSet;
}

void Dynamic5Qi::unsetAverWindow() {
  m_AverWindowIsSet = false;
}

int32_t Dynamic5Qi::getMaxDataBurstVol() const {
  return m_MaxDataBurstVol;
}

void Dynamic5Qi::setMaxDataBurstVol(int32_t value) {
  m_MaxDataBurstVol      = value;
  m_MaxDataBurstVolIsSet = true;
}

bool Dynamic5Qi::maxDataBurstVolIsSet() const {
  return m_MaxDataBurstVolIsSet;
}

void Dynamic5Qi::unsetMaxDataBurstVol() {
  m_MaxDataBurstVolIsSet = false;
}

}  // namespace model
}  // namespace smf
}  // namespace oai
