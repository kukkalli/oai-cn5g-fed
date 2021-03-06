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

#include "TraceData.h"

namespace oai {
namespace smf {
namespace model {

TraceData::TraceData() {
  m_TraceRef                      = utility::conversions::to_string_t("");
  m_NeTypeList                    = utility::conversions::to_string_t("");
  m_EventList                     = utility::conversions::to_string_t("");
  m_CollectionEntityIpv4Addr      = utility::conversions::to_string_t("");
  m_CollectionEntityIpv4AddrIsSet = false;
  m_CollectionEntityIpv6AddrIsSet = false;
  m_InterfaceList                 = utility::conversions::to_string_t("");
  m_InterfaceListIsSet            = false;
}

TraceData::~TraceData() {}

void TraceData::validate() {
  // TODO: implement validation
}

web::json::value TraceData::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("traceRef")] =
      ModelBase::toJson(m_TraceRef);
  val[utility::conversions::to_string_t("traceDepth")] =
      ModelBase::toJson(m_TraceDepth);
  val[utility::conversions::to_string_t("neTypeList")] =
      ModelBase::toJson(m_NeTypeList);
  val[utility::conversions::to_string_t("eventList")] =
      ModelBase::toJson(m_EventList);
  if (m_CollectionEntityIpv4AddrIsSet) {
    val[utility::conversions::to_string_t("collectionEntityIpv4Addr")] =
        ModelBase::toJson(m_CollectionEntityIpv4Addr);
  }
  if (m_CollectionEntityIpv6AddrIsSet) {
    val[utility::conversions::to_string_t("collectionEntityIpv6Addr")] =
        ModelBase::toJson(m_CollectionEntityIpv6Addr);
  }
  if (m_InterfaceListIsSet) {
    val[utility::conversions::to_string_t("interfaceList")] =
        ModelBase::toJson(m_InterfaceList);
  }

  return val;
}

void TraceData::fromJson(const web::json::value& val) {
  setTraceRef(ModelBase::stringFromJson(
      val.at(utility::conversions::to_string_t("traceRef"))));
  std::shared_ptr<TraceDepth> newTraceDepth(new TraceDepth());
  newTraceDepth->fromJson(
      val.at(utility::conversions::to_string_t("traceDepth")));
  setTraceDepth(newTraceDepth);
  setNeTypeList(ModelBase::stringFromJson(
      val.at(utility::conversions::to_string_t("neTypeList"))));
  setEventList(ModelBase::stringFromJson(
      val.at(utility::conversions::to_string_t("eventList"))));
  if (val.has_field(
          utility::conversions::to_string_t("collectionEntityIpv4Addr"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("collectionEntityIpv4Addr"));
    if (!fieldValue.is_null()) {
      setCollectionEntityIpv4Addr(ModelBase::stringFromJson(fieldValue));
    }
  }
  if (val.has_field(
          utility::conversions::to_string_t("collectionEntityIpv6Addr"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("collectionEntityIpv6Addr"));
    if (!fieldValue.is_null()) {
      // std::shared_ptr<utility::string_t> newItem(new Ipv6Addr());
      // newItem->fromJson(fieldValue);
      setCollectionEntityIpv6Addr(ModelBase::stringFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("interfaceList"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("interfaceList"));
    if (!fieldValue.is_null()) {
      setInterfaceList(ModelBase::stringFromJson(fieldValue));
    }
  }
}

void TraceData::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("traceRef"), m_TraceRef));
  m_TraceDepth->toMultipart(
      multipart, utility::conversions::to_string_t("traceDepth."));
  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("neTypeList"),
      m_NeTypeList));
  multipart->add(ModelBase::toHttpContent(
      namePrefix + utility::conversions::to_string_t("eventList"),
      m_EventList));
  if (m_CollectionEntityIpv4AddrIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix +
            utility::conversions::to_string_t("collectionEntityIpv4Addr"),
        m_CollectionEntityIpv4Addr));
  }
  if (m_CollectionEntityIpv6AddrIsSet) {
    // if (m_CollectionEntityIpv6Addr.get())

    // {
    //     m_CollectionEntityIpv6Addr->toMultipart(multipart,
    //     utility::conversions::to_string_t("collectionEntityIpv6Addr."));
    // }
    multipart->add(ModelBase::toHttpContent(
        namePrefix +
            utility::conversions::to_string_t("collectionEntityIpv6Addr"),
        m_CollectionEntityIpv6Addr));
  }
  if (m_InterfaceListIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("interfaceList"),
        m_InterfaceList));
  }
}

void TraceData::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  setTraceRef(ModelBase::stringFromHttpContent(
      multipart->getContent(utility::conversions::to_string_t("traceRef"))));
  std::shared_ptr<TraceDepth> newTraceDepth(new TraceDepth());
  newTraceDepth->fromMultiPart(
      multipart, utility::conversions::to_string_t("traceDepth."));
  setTraceDepth(newTraceDepth);
  setNeTypeList(ModelBase::stringFromHttpContent(
      multipart->getContent(utility::conversions::to_string_t("neTypeList"))));
  setEventList(ModelBase::stringFromHttpContent(
      multipart->getContent(utility::conversions::to_string_t("eventList"))));
  if (multipart->hasContent(
          utility::conversions::to_string_t("collectionEntityIpv4Addr"))) {
    setCollectionEntityIpv4Addr(
        ModelBase::stringFromHttpContent(multipart->getContent(
            utility::conversions::to_string_t("collectionEntityIpv4Addr"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("collectionEntityIpv6Addr"))) {
    // if(multipart->hasContent(utility::conversions::to_string_t("collectionEntityIpv6Addr")))
    // {
    //     std::shared_ptr<utility::string_t> newItem(new Ipv6Addr());
    //     newItem->fromMultiPart(multipart,
    //     utility::conversions::to_string_t("collectionEntityIpv6Addr."));
    setCollectionEntityIpv6Addr(
        ModelBase::stringFromHttpContent(multipart->getContent(
            utility::conversions::to_string_t("collectionEntityIpv6Addr"))));
    // }
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("interfaceList"))) {
    setInterfaceList(ModelBase::stringFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("interfaceList"))));
  }
}

utility::string_t TraceData::getTraceRef() const {
  return m_TraceRef;
}

void TraceData::setTraceRef(const utility::string_t& value) {
  m_TraceRef = value;
}

std::shared_ptr<TraceDepth> TraceData::getTraceDepth() const {
  return m_TraceDepth;
}

void TraceData::setTraceDepth(const std::shared_ptr<TraceDepth>& value) {
  m_TraceDepth = value;
}

utility::string_t TraceData::getNeTypeList() const {
  return m_NeTypeList;
}

void TraceData::setNeTypeList(const utility::string_t& value) {
  m_NeTypeList = value;
}

utility::string_t TraceData::getEventList() const {
  return m_EventList;
}

void TraceData::setEventList(const utility::string_t& value) {
  m_EventList = value;
}

utility::string_t TraceData::getCollectionEntityIpv4Addr() const {
  return m_CollectionEntityIpv4Addr;
}

void TraceData::setCollectionEntityIpv4Addr(const utility::string_t& value) {
  m_CollectionEntityIpv4Addr      = value;
  m_CollectionEntityIpv4AddrIsSet = true;
}

bool TraceData::collectionEntityIpv4AddrIsSet() const {
  return m_CollectionEntityIpv4AddrIsSet;
}

void TraceData::unsetCollectionEntityIpv4Addr() {
  m_CollectionEntityIpv4AddrIsSet = false;
}

utility::string_t TraceData::getCollectionEntityIpv6Addr() const {
  return m_CollectionEntityIpv6Addr;
}

void TraceData::setCollectionEntityIpv6Addr(const utility::string_t& value) {
  m_CollectionEntityIpv6Addr      = value;
  m_CollectionEntityIpv6AddrIsSet = true;
}

bool TraceData::collectionEntityIpv6AddrIsSet() const {
  return m_CollectionEntityIpv6AddrIsSet;
}

void TraceData::unsetCollectionEntityIpv6Addr() {
  m_CollectionEntityIpv6AddrIsSet = false;
}

utility::string_t TraceData::getInterfaceList() const {
  return m_InterfaceList;
}

void TraceData::setInterfaceList(const utility::string_t& value) {
  m_InterfaceList      = value;
  m_InterfaceListIsSet = true;
}

bool TraceData::interfaceListIsSet() const {
  return m_InterfaceListIsSet;
}

void TraceData::unsetInterfaceList() {
  m_InterfaceListIsSet = false;
}

}  // namespace model
}  // namespace smf
}  // namespace oai
