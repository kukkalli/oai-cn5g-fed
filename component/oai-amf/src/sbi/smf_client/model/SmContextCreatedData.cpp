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

#include "SmContextCreatedData.h"

namespace oai {
namespace smf {
namespace model {

SmContextCreatedData::SmContextCreatedData() {
  m_HSmfUri                   = utility::conversions::to_string_t("");
  m_HSmfUriIsSet              = false;
  m_PduSessionId              = 0;
  m_PduSessionIdIsSet         = false;
  m_SNssaiIsSet               = false;
  m_UpCnxStateIsSet           = false;
  m_N2SmInfoIsSet             = false;
  m_N2SmInfoTypeIsSet         = false;
  m_AllocatedEbiListIsSet     = false;
  m_HoStateIsSet              = false;
  m_Gpsi                      = utility::conversions::to_string_t("");
  m_GpsiIsSet                 = false;
  m_SmfServiceInstanceId      = utility::conversions::to_string_t("");
  m_SmfServiceInstanceIdIsSet = false;
  m_RecoveryTime              = utility::datetime();
  m_RecoveryTimeIsSet         = false;
  m_SupportedFeatures         = utility::conversions::to_string_t("");
  m_SupportedFeaturesIsSet    = false;
}

SmContextCreatedData::~SmContextCreatedData() {}

void SmContextCreatedData::validate() {
  // TODO: implement validation
}

web::json::value SmContextCreatedData::toJson() const {
  web::json::value val = web::json::value::object();

  if (m_HSmfUriIsSet) {
    val[utility::conversions::to_string_t("hSmfUri")] =
        ModelBase::toJson(m_HSmfUri);
  }
  if (m_PduSessionIdIsSet) {
    val[utility::conversions::to_string_t("pduSessionId")] =
        ModelBase::toJson(m_PduSessionId);
  }
  if (m_SNssaiIsSet) {
    val[utility::conversions::to_string_t("sNssai")] =
        ModelBase::toJson(m_SNssai);
  }
  if (m_UpCnxStateIsSet) {
    val[utility::conversions::to_string_t("upCnxState")] =
        ModelBase::toJson(m_UpCnxState);
  }
  if (m_N2SmInfoIsSet) {
    val[utility::conversions::to_string_t("n2SmInfo")] =
        ModelBase::toJson(m_N2SmInfo);
  }
  if (m_N2SmInfoTypeIsSet) {
    val[utility::conversions::to_string_t("n2SmInfoType")] =
        ModelBase::toJson(m_N2SmInfoType);
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_AllocatedEbiList) {
      jsonArray.push_back(ModelBase::toJson(item));
    }
    if (jsonArray.size() > 0) {
      val[utility::conversions::to_string_t("allocatedEbiList")] =
          web::json::value::array(jsonArray);
    }
  }
  if (m_HoStateIsSet) {
    val[utility::conversions::to_string_t("hoState")] =
        ModelBase::toJson(m_HoState);
  }
  if (m_GpsiIsSet) {
    val[utility::conversions::to_string_t("gpsi")] = ModelBase::toJson(m_Gpsi);
  }
  if (m_SmfServiceInstanceIdIsSet) {
    val[utility::conversions::to_string_t("smfServiceInstanceId")] =
        ModelBase::toJson(m_SmfServiceInstanceId);
  }
  if (m_RecoveryTimeIsSet) {
    val[utility::conversions::to_string_t("recoveryTime")] =
        ModelBase::toJson(m_RecoveryTime);
  }
  if (m_SupportedFeaturesIsSet) {
    val[utility::conversions::to_string_t("supportedFeatures")] =
        ModelBase::toJson(m_SupportedFeatures);
  }

  return val;
}

void SmContextCreatedData::fromJson(const web::json::value& val) {
  if (val.has_field(utility::conversions::to_string_t("hSmfUri"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("hSmfUri"));
    if (!fieldValue.is_null()) {
      setHSmfUri(ModelBase::stringFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("pduSessionId"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("pduSessionId"));
    if (!fieldValue.is_null()) {
      setPduSessionId(ModelBase::int32_tFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("sNssai"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("sNssai"));
    if (!fieldValue.is_null()) {
      std::shared_ptr<Snssai> newItem(new Snssai());
      newItem->fromJson(fieldValue);
      setSNssai(newItem);
    }
  }
  if (val.has_field(utility::conversions::to_string_t("upCnxState"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("upCnxState"));
    if (!fieldValue.is_null()) {
      std::shared_ptr<UpCnxState> newItem(new UpCnxState());
      newItem->fromJson(fieldValue);
      setUpCnxState(newItem);
    }
  }
  if (val.has_field(utility::conversions::to_string_t("n2SmInfo"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("n2SmInfo"));
    if (!fieldValue.is_null()) {
      std::shared_ptr<RefToBinaryData> newItem(new RefToBinaryData());
      newItem->fromJson(fieldValue);
      setN2SmInfo(newItem);
    }
  }
  if (val.has_field(utility::conversions::to_string_t("n2SmInfoType"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("n2SmInfoType"));
    if (!fieldValue.is_null()) {
      std::shared_ptr<N2SmInfoType> newItem(new N2SmInfoType());
      newItem->fromJson(fieldValue);
      setN2SmInfoType(newItem);
    }
  }
  {
    m_AllocatedEbiList.clear();
    std::vector<web::json::value> jsonArray;
    if (val.has_field(utility::conversions::to_string_t("allocatedEbiList"))) {
      for (auto& item :
           val.at(utility::conversions::to_string_t("allocatedEbiList"))
               .as_array()) {
        if (item.is_null()) {
          m_AllocatedEbiList.push_back(std::shared_ptr<EbiArpMapping>(nullptr));
        } else {
          std::shared_ptr<EbiArpMapping> newItem(new EbiArpMapping());
          newItem->fromJson(item);
          m_AllocatedEbiList.push_back(newItem);
        }
      }
    }
  }
  if (val.has_field(utility::conversions::to_string_t("hoState"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("hoState"));
    if (!fieldValue.is_null()) {
      std::shared_ptr<HoState> newItem(new HoState());
      newItem->fromJson(fieldValue);
      setHoState(newItem);
    }
  }
  if (val.has_field(utility::conversions::to_string_t("gpsi"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("gpsi"));
    if (!fieldValue.is_null()) {
      setGpsi(ModelBase::stringFromJson(fieldValue));
    }
  }
  if (val.has_field(
          utility::conversions::to_string_t("smfServiceInstanceId"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("smfServiceInstanceId"));
    if (!fieldValue.is_null()) {
      setSmfServiceInstanceId(ModelBase::stringFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("recoveryTime"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("recoveryTime"));
    if (!fieldValue.is_null()) {
      setRecoveryTime(ModelBase::dateFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("supportedFeatures"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("supportedFeatures"));
    if (!fieldValue.is_null()) {
      setSupportedFeatures(ModelBase::stringFromJson(fieldValue));
    }
  }
}

void SmContextCreatedData::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  if (m_HSmfUriIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("hSmfUri"), m_HSmfUri));
  }
  if (m_PduSessionIdIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("pduSessionId"),
        m_PduSessionId));
  }
  if (m_SNssaiIsSet) {
    if (m_SNssai.get()) {
      m_SNssai->toMultipart(
          multipart, utility::conversions::to_string_t("sNssai."));
    }
  }
  if (m_UpCnxStateIsSet) {
    if (m_UpCnxState.get()) {
      m_UpCnxState->toMultipart(
          multipart, utility::conversions::to_string_t("upCnxState."));
    }
  }
  if (m_N2SmInfoIsSet) {
    if (m_N2SmInfo.get()) {
      m_N2SmInfo->toMultipart(
          multipart, utility::conversions::to_string_t("n2SmInfo."));
    }
  }
  if (m_N2SmInfoTypeIsSet) {
    if (m_N2SmInfoType.get()) {
      m_N2SmInfoType->toMultipart(
          multipart, utility::conversions::to_string_t("n2SmInfoType."));
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_AllocatedEbiList) {
      jsonArray.push_back(ModelBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      multipart->add(ModelBase::toHttpContent(
          namePrefix + utility::conversions::to_string_t("allocatedEbiList"),
          web::json::value::array(jsonArray),
          utility::conversions::to_string_t("application/json")));
    }
  }
  if (m_HoStateIsSet) {
    if (m_HoState.get()) {
      m_HoState->toMultipart(
          multipart, utility::conversions::to_string_t("hoState."));
    }
  }
  if (m_GpsiIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("gpsi"), m_Gpsi));
  }
  if (m_SmfServiceInstanceIdIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("smfServiceInstanceId"),
        m_SmfServiceInstanceId));
  }
  if (m_RecoveryTimeIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("recoveryTime"),
        m_RecoveryTime));
  }
  if (m_SupportedFeaturesIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("supportedFeatures"),
        m_SupportedFeatures));
  }
}

void SmContextCreatedData::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  if (multipart->hasContent(utility::conversions::to_string_t("hSmfUri"))) {
    setHSmfUri(ModelBase::stringFromHttpContent(
        multipart->getContent(utility::conversions::to_string_t("hSmfUri"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("pduSessionId"))) {
    setPduSessionId(ModelBase::int32_tFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("pduSessionId"))));
  }
  if (multipart->hasContent(utility::conversions::to_string_t("sNssai"))) {
    if (multipart->hasContent(utility::conversions::to_string_t("sNssai"))) {
      std::shared_ptr<Snssai> newItem(new Snssai());
      newItem->fromMultiPart(
          multipart, utility::conversions::to_string_t("sNssai."));
      setSNssai(newItem);
    }
  }
  if (multipart->hasContent(utility::conversions::to_string_t("upCnxState"))) {
    if (multipart->hasContent(
            utility::conversions::to_string_t("upCnxState"))) {
      std::shared_ptr<UpCnxState> newItem(new UpCnxState());
      newItem->fromMultiPart(
          multipart, utility::conversions::to_string_t("upCnxState."));
      setUpCnxState(newItem);
    }
  }
  if (multipart->hasContent(utility::conversions::to_string_t("n2SmInfo"))) {
    if (multipart->hasContent(utility::conversions::to_string_t("n2SmInfo"))) {
      std::shared_ptr<RefToBinaryData> newItem(new RefToBinaryData());
      newItem->fromMultiPart(
          multipart, utility::conversions::to_string_t("n2SmInfo."));
      setN2SmInfo(newItem);
    }
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("n2SmInfoType"))) {
    if (multipart->hasContent(
            utility::conversions::to_string_t("n2SmInfoType"))) {
      std::shared_ptr<N2SmInfoType> newItem(new N2SmInfoType());
      newItem->fromMultiPart(
          multipart, utility::conversions::to_string_t("n2SmInfoType."));
      setN2SmInfoType(newItem);
    }
  }
  {
    m_AllocatedEbiList.clear();
    if (multipart->hasContent(
            utility::conversions::to_string_t("allocatedEbiList"))) {
      web::json::value jsonArray = web::json::value::parse(
          ModelBase::stringFromHttpContent(multipart->getContent(
              utility::conversions::to_string_t("allocatedEbiList"))));
      for (auto& item : jsonArray.as_array()) {
        if (item.is_null()) {
          m_AllocatedEbiList.push_back(std::shared_ptr<EbiArpMapping>(nullptr));
        } else {
          std::shared_ptr<EbiArpMapping> newItem(new EbiArpMapping());
          newItem->fromJson(item);
          m_AllocatedEbiList.push_back(newItem);
        }
      }
    }
  }
  if (multipart->hasContent(utility::conversions::to_string_t("hoState"))) {
    if (multipart->hasContent(utility::conversions::to_string_t("hoState"))) {
      std::shared_ptr<HoState> newItem(new HoState());
      newItem->fromMultiPart(
          multipart, utility::conversions::to_string_t("hoState."));
      setHoState(newItem);
    }
  }
  if (multipart->hasContent(utility::conversions::to_string_t("gpsi"))) {
    setGpsi(ModelBase::stringFromHttpContent(
        multipart->getContent(utility::conversions::to_string_t("gpsi"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("smfServiceInstanceId"))) {
    setSmfServiceInstanceId(
        ModelBase::stringFromHttpContent(multipart->getContent(
            utility::conversions::to_string_t("smfServiceInstanceId"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("recoveryTime"))) {
    setRecoveryTime(ModelBase::dateFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("recoveryTime"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("supportedFeatures"))) {
    setSupportedFeatures(ModelBase::stringFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("supportedFeatures"))));
  }
}

utility::string_t SmContextCreatedData::getHSmfUri() const {
  return m_HSmfUri;
}

void SmContextCreatedData::setHSmfUri(const utility::string_t& value) {
  m_HSmfUri      = value;
  m_HSmfUriIsSet = true;
}

bool SmContextCreatedData::hSmfUriIsSet() const {
  return m_HSmfUriIsSet;
}

void SmContextCreatedData::unsetHSmfUri() {
  m_HSmfUriIsSet = false;
}

int32_t SmContextCreatedData::getPduSessionId() const {
  return m_PduSessionId;
}

void SmContextCreatedData::setPduSessionId(int32_t value) {
  m_PduSessionId      = value;
  m_PduSessionIdIsSet = true;
}

bool SmContextCreatedData::pduSessionIdIsSet() const {
  return m_PduSessionIdIsSet;
}

void SmContextCreatedData::unsetPduSessionId() {
  m_PduSessionIdIsSet = false;
}

std::shared_ptr<Snssai> SmContextCreatedData::getSNssai() const {
  return m_SNssai;
}

void SmContextCreatedData::setSNssai(const std::shared_ptr<Snssai>& value) {
  m_SNssai      = value;
  m_SNssaiIsSet = true;
}

bool SmContextCreatedData::sNssaiIsSet() const {
  return m_SNssaiIsSet;
}

void SmContextCreatedData::unsetSNssai() {
  m_SNssaiIsSet = false;
}

std::shared_ptr<UpCnxState> SmContextCreatedData::getUpCnxState() const {
  return m_UpCnxState;
}

void SmContextCreatedData::setUpCnxState(
    const std::shared_ptr<UpCnxState>& value) {
  m_UpCnxState      = value;
  m_UpCnxStateIsSet = true;
}

bool SmContextCreatedData::upCnxStateIsSet() const {
  return m_UpCnxStateIsSet;
}

void SmContextCreatedData::unsetUpCnxState() {
  m_UpCnxStateIsSet = false;
}

std::shared_ptr<RefToBinaryData> SmContextCreatedData::getN2SmInfo() const {
  return m_N2SmInfo;
}

void SmContextCreatedData::setN2SmInfo(
    const std::shared_ptr<RefToBinaryData>& value) {
  m_N2SmInfo      = value;
  m_N2SmInfoIsSet = true;
}

bool SmContextCreatedData::n2SmInfoIsSet() const {
  return m_N2SmInfoIsSet;
}

void SmContextCreatedData::unsetN2SmInfo() {
  m_N2SmInfoIsSet = false;
}

std::shared_ptr<N2SmInfoType> SmContextCreatedData::getN2SmInfoType() const {
  return m_N2SmInfoType;
}

void SmContextCreatedData::setN2SmInfoType(
    const std::shared_ptr<N2SmInfoType>& value) {
  m_N2SmInfoType      = value;
  m_N2SmInfoTypeIsSet = true;
}

bool SmContextCreatedData::n2SmInfoTypeIsSet() const {
  return m_N2SmInfoTypeIsSet;
}

void SmContextCreatedData::unsetN2SmInfoType() {
  m_N2SmInfoTypeIsSet = false;
}

std::vector<std::shared_ptr<EbiArpMapping>>&
SmContextCreatedData::getAllocatedEbiList() {
  return m_AllocatedEbiList;
}

void SmContextCreatedData::setAllocatedEbiList(
    const std::vector<std::shared_ptr<EbiArpMapping>>& value) {
  m_AllocatedEbiList      = value;
  m_AllocatedEbiListIsSet = true;
}

bool SmContextCreatedData::allocatedEbiListIsSet() const {
  return m_AllocatedEbiListIsSet;
}

void SmContextCreatedData::unsetAllocatedEbiList() {
  m_AllocatedEbiListIsSet = false;
}

std::shared_ptr<HoState> SmContextCreatedData::getHoState() const {
  return m_HoState;
}

void SmContextCreatedData::setHoState(const std::shared_ptr<HoState>& value) {
  m_HoState      = value;
  m_HoStateIsSet = true;
}

bool SmContextCreatedData::hoStateIsSet() const {
  return m_HoStateIsSet;
}

void SmContextCreatedData::unsetHoState() {
  m_HoStateIsSet = false;
}

utility::string_t SmContextCreatedData::getGpsi() const {
  return m_Gpsi;
}

void SmContextCreatedData::setGpsi(const utility::string_t& value) {
  m_Gpsi      = value;
  m_GpsiIsSet = true;
}

bool SmContextCreatedData::gpsiIsSet() const {
  return m_GpsiIsSet;
}

void SmContextCreatedData::unsetGpsi() {
  m_GpsiIsSet = false;
}

utility::string_t SmContextCreatedData::getSmfServiceInstanceId() const {
  return m_SmfServiceInstanceId;
}

void SmContextCreatedData::setSmfServiceInstanceId(
    const utility::string_t& value) {
  m_SmfServiceInstanceId      = value;
  m_SmfServiceInstanceIdIsSet = true;
}

bool SmContextCreatedData::smfServiceInstanceIdIsSet() const {
  return m_SmfServiceInstanceIdIsSet;
}

void SmContextCreatedData::unsetSmfServiceInstanceId() {
  m_SmfServiceInstanceIdIsSet = false;
}

utility::datetime SmContextCreatedData::getRecoveryTime() const {
  return m_RecoveryTime;
}

void SmContextCreatedData::setRecoveryTime(const utility::datetime& value) {
  m_RecoveryTime      = value;
  m_RecoveryTimeIsSet = true;
}

bool SmContextCreatedData::recoveryTimeIsSet() const {
  return m_RecoveryTimeIsSet;
}

void SmContextCreatedData::unsetRecoveryTime() {
  m_RecoveryTimeIsSet = false;
}

utility::string_t SmContextCreatedData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}

void SmContextCreatedData::setSupportedFeatures(
    const utility::string_t& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}

bool SmContextCreatedData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}

void SmContextCreatedData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

}  // namespace model
}  // namespace smf
}  // namespace oai
