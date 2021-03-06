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

#include "VsmfUpdateData.h"

namespace oai {
namespace smf {
namespace model {

VsmfUpdateData::VsmfUpdateData() {
  m_SessionAmbrIsSet               = false;
  m_QosFlowsAddModRequestListIsSet = false;
  m_QosFlowsRelRequestListIsSet    = false;
  m_EpsBearerInfoIsSet             = false;
  m_AssignEbiListIsSet             = false;
  m_RevokeEbiListIsSet             = false;
  m_ModifiedEbiListIsSet           = false;
  m_Pti                            = 0;
  m_PtiIsSet                       = false;
  m_N1SmInfoToUeIsSet              = false;
  m_AlwaysOnGranted                = false;
  m_AlwaysOnGrantedIsSet           = false;
  m_HsmfPduSessionUri              = utility::conversions::to_string_t("");
  m_HsmfPduSessionUriIsSet         = false;
  m_SupportedFeatures              = utility::conversions::to_string_t("");
  m_SupportedFeaturesIsSet         = false;
  m_CauseIsSet                     = false;
  m_N1smCause                      = utility::conversions::to_string_t("");
  m_N1smCauseIsSet                 = false;
  m_BackOffTimer                   = 0;
  m_BackOffTimerIsSet              = false;
  m_MaReleaseIndIsSet              = false;
}

VsmfUpdateData::~VsmfUpdateData() {}

void VsmfUpdateData::validate() {
  // TODO: implement validation
}

web::json::value VsmfUpdateData::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("requestIndication")] =
      ModelBase::toJson(m_RequestIndication);
  if (m_SessionAmbrIsSet) {
    val[utility::conversions::to_string_t("sessionAmbr")] =
        ModelBase::toJson(m_SessionAmbr);
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_QosFlowsAddModRequestList) {
      jsonArray.push_back(ModelBase::toJson(item));
    }
    if (jsonArray.size() > 0) {
      val[utility::conversions::to_string_t("qosFlowsAddModRequestList")] =
          web::json::value::array(jsonArray);
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_QosFlowsRelRequestList) {
      jsonArray.push_back(ModelBase::toJson(item));
    }
    if (jsonArray.size() > 0) {
      val[utility::conversions::to_string_t("qosFlowsRelRequestList")] =
          web::json::value::array(jsonArray);
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_EpsBearerInfo) {
      jsonArray.push_back(ModelBase::toJson(item));
    }
    if (jsonArray.size() > 0) {
      val[utility::conversions::to_string_t("epsBearerInfo")] =
          web::json::value::array(jsonArray);
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_AssignEbiList) {
      jsonArray.push_back(ModelBase::toJson(item));
    }
    if (jsonArray.size() > 0) {
      val[utility::conversions::to_string_t("assignEbiList")] =
          web::json::value::array(jsonArray);
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_RevokeEbiList) {
      jsonArray.push_back(ModelBase::toJson(item));
    }
    if (jsonArray.size() > 0) {
      val[utility::conversions::to_string_t("revokeEbiList")] =
          web::json::value::array(jsonArray);
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_ModifiedEbiList) {
      jsonArray.push_back(ModelBase::toJson(item));
    }
    if (jsonArray.size() > 0) {
      val[utility::conversions::to_string_t("modifiedEbiList")] =
          web::json::value::array(jsonArray);
    }
  }
  if (m_PtiIsSet) {
    val[utility::conversions::to_string_t("pti")] = ModelBase::toJson(m_Pti);
  }
  if (m_N1SmInfoToUeIsSet) {
    val[utility::conversions::to_string_t("n1SmInfoToUe")] =
        ModelBase::toJson(m_N1SmInfoToUe);
  }
  if (m_AlwaysOnGrantedIsSet) {
    val[utility::conversions::to_string_t("alwaysOnGranted")] =
        ModelBase::toJson(m_AlwaysOnGranted);
  }
  if (m_HsmfPduSessionUriIsSet) {
    val[utility::conversions::to_string_t("hsmfPduSessionUri")] =
        ModelBase::toJson(m_HsmfPduSessionUri);
  }
  if (m_SupportedFeaturesIsSet) {
    val[utility::conversions::to_string_t("supportedFeatures")] =
        ModelBase::toJson(m_SupportedFeatures);
  }
  if (m_CauseIsSet) {
    val[utility::conversions::to_string_t("cause")] =
        ModelBase::toJson(m_Cause);
  }
  if (m_N1smCauseIsSet) {
    val[utility::conversions::to_string_t("n1smCause")] =
        ModelBase::toJson(m_N1smCause);
  }
  if (m_BackOffTimerIsSet) {
    val[utility::conversions::to_string_t("backOffTimer")] =
        ModelBase::toJson(m_BackOffTimer);
  }
  if (m_MaReleaseIndIsSet) {
    val[utility::conversions::to_string_t("maReleaseInd")] =
        ModelBase::toJson(m_MaReleaseInd);
  }

  return val;
}

void VsmfUpdateData::fromJson(const web::json::value& val) {
  std::shared_ptr<RequestIndication> newRequestIndication(
      new RequestIndication());
  newRequestIndication->fromJson(
      val.at(utility::conversions::to_string_t("requestIndication")));
  setRequestIndication(newRequestIndication);
  if (val.has_field(utility::conversions::to_string_t("sessionAmbr"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("sessionAmbr"));
    if (!fieldValue.is_null()) {
      std::shared_ptr<Ambr> newItem(new Ambr());
      newItem->fromJson(fieldValue);
      setSessionAmbr(newItem);
    }
  }
  {
    m_QosFlowsAddModRequestList.clear();
    std::vector<web::json::value> jsonArray;
    if (val.has_field(
            utility::conversions::to_string_t("qosFlowsAddModRequestList"))) {
      for (auto& item : val.at(utility::conversions::to_string_t(
                                   "qosFlowsAddModRequestList"))
                            .as_array()) {
        if (item.is_null()) {
          m_QosFlowsAddModRequestList.push_back(
              std::shared_ptr<QosFlowAddModifyRequestItem>(nullptr));
        } else {
          std::shared_ptr<QosFlowAddModifyRequestItem> newItem(
              new QosFlowAddModifyRequestItem());
          newItem->fromJson(item);
          m_QosFlowsAddModRequestList.push_back(newItem);
        }
      }
    }
  }
  {
    m_QosFlowsRelRequestList.clear();
    std::vector<web::json::value> jsonArray;
    if (val.has_field(
            utility::conversions::to_string_t("qosFlowsRelRequestList"))) {
      for (auto& item :
           val.at(utility::conversions::to_string_t("qosFlowsRelRequestList"))
               .as_array()) {
        if (item.is_null()) {
          m_QosFlowsRelRequestList.push_back(
              std::shared_ptr<QosFlowReleaseRequestItem>(nullptr));
        } else {
          std::shared_ptr<QosFlowReleaseRequestItem> newItem(
              new QosFlowReleaseRequestItem());
          newItem->fromJson(item);
          m_QosFlowsRelRequestList.push_back(newItem);
        }
      }
    }
  }
  {
    m_EpsBearerInfo.clear();
    std::vector<web::json::value> jsonArray;
    if (val.has_field(utility::conversions::to_string_t("epsBearerInfo"))) {
      for (auto& item :
           val.at(utility::conversions::to_string_t("epsBearerInfo"))
               .as_array()) {
        if (item.is_null()) {
          m_EpsBearerInfo.push_back(std::shared_ptr<EpsBearerInfo>(nullptr));
        } else {
          std::shared_ptr<EpsBearerInfo> newItem(new EpsBearerInfo());
          newItem->fromJson(item);
          m_EpsBearerInfo.push_back(newItem);
        }
      }
    }
  }
  {
    m_AssignEbiList.clear();
    std::vector<web::json::value> jsonArray;
    if (val.has_field(utility::conversions::to_string_t("assignEbiList"))) {
      for (auto& item :
           val.at(utility::conversions::to_string_t("assignEbiList"))
               .as_array()) {
        m_AssignEbiList.push_back(ModelBase::int32_tFromJson(item));
      }
    }
  }
  {
    m_RevokeEbiList.clear();
    std::vector<web::json::value> jsonArray;
    if (val.has_field(utility::conversions::to_string_t("revokeEbiList"))) {
      for (auto& item :
           val.at(utility::conversions::to_string_t("revokeEbiList"))
               .as_array()) {
        m_RevokeEbiList.push_back(ModelBase::int32_tFromJson(item));
      }
    }
  }
  {
    m_ModifiedEbiList.clear();
    std::vector<web::json::value> jsonArray;
    if (val.has_field(utility::conversions::to_string_t("modifiedEbiList"))) {
      for (auto& item :
           val.at(utility::conversions::to_string_t("modifiedEbiList"))
               .as_array()) {
        if (item.is_null()) {
          m_ModifiedEbiList.push_back(std::shared_ptr<EbiArpMapping>(nullptr));
        } else {
          std::shared_ptr<EbiArpMapping> newItem(new EbiArpMapping());
          newItem->fromJson(item);
          m_ModifiedEbiList.push_back(newItem);
        }
      }
    }
  }
  if (val.has_field(utility::conversions::to_string_t("pti"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("pti"));
    if (!fieldValue.is_null()) {
      setPti(ModelBase::int32_tFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("n1SmInfoToUe"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("n1SmInfoToUe"));
    if (!fieldValue.is_null()) {
      std::shared_ptr<RefToBinaryData> newItem(new RefToBinaryData());
      newItem->fromJson(fieldValue);
      setN1SmInfoToUe(newItem);
    }
  }
  if (val.has_field(utility::conversions::to_string_t("alwaysOnGranted"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("alwaysOnGranted"));
    if (!fieldValue.is_null()) {
      setAlwaysOnGranted(ModelBase::boolFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("hsmfPduSessionUri"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("hsmfPduSessionUri"));
    if (!fieldValue.is_null()) {
      setHsmfPduSessionUri(ModelBase::stringFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("supportedFeatures"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("supportedFeatures"));
    if (!fieldValue.is_null()) {
      setSupportedFeatures(ModelBase::stringFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("cause"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("cause"));
    if (!fieldValue.is_null()) {
      std::shared_ptr<Cause> newItem(new Cause());
      newItem->fromJson(fieldValue);
      setCause(newItem);
    }
  }
  if (val.has_field(utility::conversions::to_string_t("n1smCause"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("n1smCause"));
    if (!fieldValue.is_null()) {
      setN1smCause(ModelBase::stringFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("backOffTimer"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("backOffTimer"));
    if (!fieldValue.is_null()) {
      setBackOffTimer(ModelBase::int32_tFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("maReleaseInd"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("maReleaseInd"));
    if (!fieldValue.is_null()) {
      std::shared_ptr<MaReleaseIndication> newItem(new MaReleaseIndication());
      newItem->fromJson(fieldValue);
      setMaReleaseInd(newItem);
    }
  }
}

void VsmfUpdateData::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  m_RequestIndication->toMultipart(
      multipart, utility::conversions::to_string_t("requestIndication."));
  if (m_SessionAmbrIsSet) {
    if (m_SessionAmbr.get()) {
      m_SessionAmbr->toMultipart(
          multipart, utility::conversions::to_string_t("sessionAmbr."));
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_QosFlowsAddModRequestList) {
      jsonArray.push_back(ModelBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      multipart->add(ModelBase::toHttpContent(
          namePrefix +
              utility::conversions::to_string_t("qosFlowsAddModRequestList"),
          web::json::value::array(jsonArray),
          utility::conversions::to_string_t("application/json")));
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_QosFlowsRelRequestList) {
      jsonArray.push_back(ModelBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      multipart->add(ModelBase::toHttpContent(
          namePrefix +
              utility::conversions::to_string_t("qosFlowsRelRequestList"),
          web::json::value::array(jsonArray),
          utility::conversions::to_string_t("application/json")));
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_EpsBearerInfo) {
      jsonArray.push_back(ModelBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      multipart->add(ModelBase::toHttpContent(
          namePrefix + utility::conversions::to_string_t("epsBearerInfo"),
          web::json::value::array(jsonArray),
          utility::conversions::to_string_t("application/json")));
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_AssignEbiList) {
      jsonArray.push_back(ModelBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      multipart->add(ModelBase::toHttpContent(
          namePrefix + utility::conversions::to_string_t("assignEbiList"),
          web::json::value::array(jsonArray),
          utility::conversions::to_string_t("application/json")));
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_RevokeEbiList) {
      jsonArray.push_back(ModelBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      multipart->add(ModelBase::toHttpContent(
          namePrefix + utility::conversions::to_string_t("revokeEbiList"),
          web::json::value::array(jsonArray),
          utility::conversions::to_string_t("application/json")));
    }
  }
  {
    std::vector<web::json::value> jsonArray;
    for (auto& item : m_ModifiedEbiList) {
      jsonArray.push_back(ModelBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      multipart->add(ModelBase::toHttpContent(
          namePrefix + utility::conversions::to_string_t("modifiedEbiList"),
          web::json::value::array(jsonArray),
          utility::conversions::to_string_t("application/json")));
    }
  }
  if (m_PtiIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("pti"), m_Pti));
  }
  if (m_N1SmInfoToUeIsSet) {
    if (m_N1SmInfoToUe.get()) {
      m_N1SmInfoToUe->toMultipart(
          multipart, utility::conversions::to_string_t("n1SmInfoToUe."));
    }
  }
  if (m_AlwaysOnGrantedIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("alwaysOnGranted"),
        m_AlwaysOnGranted));
  }
  if (m_HsmfPduSessionUriIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("hsmfPduSessionUri"),
        m_HsmfPduSessionUri));
  }
  if (m_SupportedFeaturesIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("supportedFeatures"),
        m_SupportedFeatures));
  }
  if (m_CauseIsSet) {
    if (m_Cause.get()) {
      m_Cause->toMultipart(
          multipart, utility::conversions::to_string_t("cause."));
    }
  }
  if (m_N1smCauseIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("n1smCause"),
        m_N1smCause));
  }
  if (m_BackOffTimerIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("backOffTimer"),
        m_BackOffTimer));
  }
  if (m_MaReleaseIndIsSet) {
    if (m_MaReleaseInd.get()) {
      m_MaReleaseInd->toMultipart(
          multipart, utility::conversions::to_string_t("maReleaseInd."));
    }
  }
}

void VsmfUpdateData::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  std::shared_ptr<RequestIndication> newRequestIndication(
      new RequestIndication());
  newRequestIndication->fromMultiPart(
      multipart, utility::conversions::to_string_t("requestIndication."));
  setRequestIndication(newRequestIndication);
  if (multipart->hasContent(utility::conversions::to_string_t("sessionAmbr"))) {
    if (multipart->hasContent(
            utility::conversions::to_string_t("sessionAmbr"))) {
      std::shared_ptr<Ambr> newItem(new Ambr());
      newItem->fromMultiPart(
          multipart, utility::conversions::to_string_t("sessionAmbr."));
      setSessionAmbr(newItem);
    }
  }
  {
    m_QosFlowsAddModRequestList.clear();
    if (multipart->hasContent(
            utility::conversions::to_string_t("qosFlowsAddModRequestList"))) {
      web::json::value jsonArray = web::json::value::parse(
          ModelBase::stringFromHttpContent(multipart->getContent(
              utility::conversions::to_string_t("qosFlowsAddModRequestList"))));
      for (auto& item : jsonArray.as_array()) {
        if (item.is_null()) {
          m_QosFlowsAddModRequestList.push_back(
              std::shared_ptr<QosFlowAddModifyRequestItem>(nullptr));
        } else {
          std::shared_ptr<QosFlowAddModifyRequestItem> newItem(
              new QosFlowAddModifyRequestItem());
          newItem->fromJson(item);
          m_QosFlowsAddModRequestList.push_back(newItem);
        }
      }
    }
  }
  {
    m_QosFlowsRelRequestList.clear();
    if (multipart->hasContent(
            utility::conversions::to_string_t("qosFlowsRelRequestList"))) {
      web::json::value jsonArray = web::json::value::parse(
          ModelBase::stringFromHttpContent(multipart->getContent(
              utility::conversions::to_string_t("qosFlowsRelRequestList"))));
      for (auto& item : jsonArray.as_array()) {
        if (item.is_null()) {
          m_QosFlowsRelRequestList.push_back(
              std::shared_ptr<QosFlowReleaseRequestItem>(nullptr));
        } else {
          std::shared_ptr<QosFlowReleaseRequestItem> newItem(
              new QosFlowReleaseRequestItem());
          newItem->fromJson(item);
          m_QosFlowsRelRequestList.push_back(newItem);
        }
      }
    }
  }
  {
    m_EpsBearerInfo.clear();
    if (multipart->hasContent(
            utility::conversions::to_string_t("epsBearerInfo"))) {
      web::json::value jsonArray = web::json::value::parse(
          ModelBase::stringFromHttpContent(multipart->getContent(
              utility::conversions::to_string_t("epsBearerInfo"))));
      for (auto& item : jsonArray.as_array()) {
        if (item.is_null()) {
          m_EpsBearerInfo.push_back(std::shared_ptr<EpsBearerInfo>(nullptr));
        } else {
          std::shared_ptr<EpsBearerInfo> newItem(new EpsBearerInfo());
          newItem->fromJson(item);
          m_EpsBearerInfo.push_back(newItem);
        }
      }
    }
  }
  {
    m_AssignEbiList.clear();
    if (multipart->hasContent(
            utility::conversions::to_string_t("assignEbiList"))) {
      web::json::value jsonArray = web::json::value::parse(
          ModelBase::stringFromHttpContent(multipart->getContent(
              utility::conversions::to_string_t("assignEbiList"))));
      for (auto& item : jsonArray.as_array()) {
        m_AssignEbiList.push_back(ModelBase::int32_tFromJson(item));
      }
    }
  }
  {
    m_RevokeEbiList.clear();
    if (multipart->hasContent(
            utility::conversions::to_string_t("revokeEbiList"))) {
      web::json::value jsonArray = web::json::value::parse(
          ModelBase::stringFromHttpContent(multipart->getContent(
              utility::conversions::to_string_t("revokeEbiList"))));
      for (auto& item : jsonArray.as_array()) {
        m_RevokeEbiList.push_back(ModelBase::int32_tFromJson(item));
      }
    }
  }
  {
    m_ModifiedEbiList.clear();
    if (multipart->hasContent(
            utility::conversions::to_string_t("modifiedEbiList"))) {
      web::json::value jsonArray = web::json::value::parse(
          ModelBase::stringFromHttpContent(multipart->getContent(
              utility::conversions::to_string_t("modifiedEbiList"))));
      for (auto& item : jsonArray.as_array()) {
        if (item.is_null()) {
          m_ModifiedEbiList.push_back(std::shared_ptr<EbiArpMapping>(nullptr));
        } else {
          std::shared_ptr<EbiArpMapping> newItem(new EbiArpMapping());
          newItem->fromJson(item);
          m_ModifiedEbiList.push_back(newItem);
        }
      }
    }
  }
  if (multipart->hasContent(utility::conversions::to_string_t("pti"))) {
    setPti(ModelBase::int32_tFromHttpContent(
        multipart->getContent(utility::conversions::to_string_t("pti"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("n1SmInfoToUe"))) {
    if (multipart->hasContent(
            utility::conversions::to_string_t("n1SmInfoToUe"))) {
      std::shared_ptr<RefToBinaryData> newItem(new RefToBinaryData());
      newItem->fromMultiPart(
          multipart, utility::conversions::to_string_t("n1SmInfoToUe."));
      setN1SmInfoToUe(newItem);
    }
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("alwaysOnGranted"))) {
    setAlwaysOnGranted(ModelBase::boolFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("alwaysOnGranted"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("hsmfPduSessionUri"))) {
    setHsmfPduSessionUri(ModelBase::stringFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("hsmfPduSessionUri"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("supportedFeatures"))) {
    setSupportedFeatures(ModelBase::stringFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("supportedFeatures"))));
  }
  if (multipart->hasContent(utility::conversions::to_string_t("cause"))) {
    if (multipart->hasContent(utility::conversions::to_string_t("cause"))) {
      std::shared_ptr<Cause> newItem(new Cause());
      newItem->fromMultiPart(
          multipart, utility::conversions::to_string_t("cause."));
      setCause(newItem);
    }
  }
  if (multipart->hasContent(utility::conversions::to_string_t("n1smCause"))) {
    setN1smCause(ModelBase::stringFromHttpContent(
        multipart->getContent(utility::conversions::to_string_t("n1smCause"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("backOffTimer"))) {
    setBackOffTimer(ModelBase::int32_tFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("backOffTimer"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("maReleaseInd"))) {
    if (multipart->hasContent(
            utility::conversions::to_string_t("maReleaseInd"))) {
      std::shared_ptr<MaReleaseIndication> newItem(new MaReleaseIndication());
      newItem->fromMultiPart(
          multipart, utility::conversions::to_string_t("maReleaseInd."));
      setMaReleaseInd(newItem);
    }
  }
}

std::shared_ptr<RequestIndication> VsmfUpdateData::getRequestIndication()
    const {
  return m_RequestIndication;
}

void VsmfUpdateData::setRequestIndication(
    const std::shared_ptr<RequestIndication>& value) {
  m_RequestIndication = value;
}

std::shared_ptr<Ambr> VsmfUpdateData::getSessionAmbr() const {
  return m_SessionAmbr;
}

void VsmfUpdateData::setSessionAmbr(const std::shared_ptr<Ambr>& value) {
  m_SessionAmbr      = value;
  m_SessionAmbrIsSet = true;
}

bool VsmfUpdateData::sessionAmbrIsSet() const {
  return m_SessionAmbrIsSet;
}

void VsmfUpdateData::unsetSessionAmbr() {
  m_SessionAmbrIsSet = false;
}

std::vector<std::shared_ptr<QosFlowAddModifyRequestItem>>&
VsmfUpdateData::getQosFlowsAddModRequestList() {
  return m_QosFlowsAddModRequestList;
}

void VsmfUpdateData::setQosFlowsAddModRequestList(
    const std::vector<std::shared_ptr<QosFlowAddModifyRequestItem>>& value) {
  m_QosFlowsAddModRequestList      = value;
  m_QosFlowsAddModRequestListIsSet = true;
}

bool VsmfUpdateData::qosFlowsAddModRequestListIsSet() const {
  return m_QosFlowsAddModRequestListIsSet;
}

void VsmfUpdateData::unsetQosFlowsAddModRequestList() {
  m_QosFlowsAddModRequestListIsSet = false;
}

std::vector<std::shared_ptr<QosFlowReleaseRequestItem>>&
VsmfUpdateData::getQosFlowsRelRequestList() {
  return m_QosFlowsRelRequestList;
}

void VsmfUpdateData::setQosFlowsRelRequestList(
    const std::vector<std::shared_ptr<QosFlowReleaseRequestItem>>& value) {
  m_QosFlowsRelRequestList      = value;
  m_QosFlowsRelRequestListIsSet = true;
}

bool VsmfUpdateData::qosFlowsRelRequestListIsSet() const {
  return m_QosFlowsRelRequestListIsSet;
}

void VsmfUpdateData::unsetQosFlowsRelRequestList() {
  m_QosFlowsRelRequestListIsSet = false;
}

std::vector<std::shared_ptr<EpsBearerInfo>>&
VsmfUpdateData::getEpsBearerInfo() {
  return m_EpsBearerInfo;
}

void VsmfUpdateData::setEpsBearerInfo(
    const std::vector<std::shared_ptr<EpsBearerInfo>>& value) {
  m_EpsBearerInfo      = value;
  m_EpsBearerInfoIsSet = true;
}

bool VsmfUpdateData::epsBearerInfoIsSet() const {
  return m_EpsBearerInfoIsSet;
}

void VsmfUpdateData::unsetEpsBearerInfo() {
  m_EpsBearerInfoIsSet = false;
}

std::vector<int32_t>& VsmfUpdateData::getAssignEbiList() {
  return m_AssignEbiList;
}

void VsmfUpdateData::setAssignEbiList(std::vector<int32_t> value) {
  m_AssignEbiList      = value;
  m_AssignEbiListIsSet = true;
}

bool VsmfUpdateData::assignEbiListIsSet() const {
  return m_AssignEbiListIsSet;
}

void VsmfUpdateData::unsetAssignEbiList() {
  m_AssignEbiListIsSet = false;
}

std::vector<int32_t>& VsmfUpdateData::getRevokeEbiList() {
  return m_RevokeEbiList;
}

void VsmfUpdateData::setRevokeEbiList(std::vector<int32_t> value) {
  m_RevokeEbiList      = value;
  m_RevokeEbiListIsSet = true;
}

bool VsmfUpdateData::revokeEbiListIsSet() const {
  return m_RevokeEbiListIsSet;
}

void VsmfUpdateData::unsetRevokeEbiList() {
  m_RevokeEbiListIsSet = false;
}

std::vector<std::shared_ptr<EbiArpMapping>>&
VsmfUpdateData::getModifiedEbiList() {
  return m_ModifiedEbiList;
}

void VsmfUpdateData::setModifiedEbiList(
    const std::vector<std::shared_ptr<EbiArpMapping>>& value) {
  m_ModifiedEbiList      = value;
  m_ModifiedEbiListIsSet = true;
}

bool VsmfUpdateData::modifiedEbiListIsSet() const {
  return m_ModifiedEbiListIsSet;
}

void VsmfUpdateData::unsetModifiedEbiList() {
  m_ModifiedEbiListIsSet = false;
}

int32_t VsmfUpdateData::getPti() const {
  return m_Pti;
}

void VsmfUpdateData::setPti(int32_t value) {
  m_Pti      = value;
  m_PtiIsSet = true;
}

bool VsmfUpdateData::ptiIsSet() const {
  return m_PtiIsSet;
}

void VsmfUpdateData::unsetPti() {
  m_PtiIsSet = false;
}

std::shared_ptr<RefToBinaryData> VsmfUpdateData::getN1SmInfoToUe() const {
  return m_N1SmInfoToUe;
}

void VsmfUpdateData::setN1SmInfoToUe(
    const std::shared_ptr<RefToBinaryData>& value) {
  m_N1SmInfoToUe      = value;
  m_N1SmInfoToUeIsSet = true;
}

bool VsmfUpdateData::n1SmInfoToUeIsSet() const {
  return m_N1SmInfoToUeIsSet;
}

void VsmfUpdateData::unsetN1SmInfoToUe() {
  m_N1SmInfoToUeIsSet = false;
}

bool VsmfUpdateData::isAlwaysOnGranted() const {
  return m_AlwaysOnGranted;
}

void VsmfUpdateData::setAlwaysOnGranted(bool value) {
  m_AlwaysOnGranted      = value;
  m_AlwaysOnGrantedIsSet = true;
}

bool VsmfUpdateData::alwaysOnGrantedIsSet() const {
  return m_AlwaysOnGrantedIsSet;
}

void VsmfUpdateData::unsetAlwaysOnGranted() {
  m_AlwaysOnGrantedIsSet = false;
}

utility::string_t VsmfUpdateData::getHsmfPduSessionUri() const {
  return m_HsmfPduSessionUri;
}

void VsmfUpdateData::setHsmfPduSessionUri(const utility::string_t& value) {
  m_HsmfPduSessionUri      = value;
  m_HsmfPduSessionUriIsSet = true;
}

bool VsmfUpdateData::hsmfPduSessionUriIsSet() const {
  return m_HsmfPduSessionUriIsSet;
}

void VsmfUpdateData::unsetHsmfPduSessionUri() {
  m_HsmfPduSessionUriIsSet = false;
}

utility::string_t VsmfUpdateData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}

void VsmfUpdateData::setSupportedFeatures(const utility::string_t& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}

bool VsmfUpdateData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}

void VsmfUpdateData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

std::shared_ptr<Cause> VsmfUpdateData::getCause() const {
  return m_Cause;
}

void VsmfUpdateData::setCause(const std::shared_ptr<Cause>& value) {
  m_Cause      = value;
  m_CauseIsSet = true;
}

bool VsmfUpdateData::causeIsSet() const {
  return m_CauseIsSet;
}

void VsmfUpdateData::unsetCause() {
  m_CauseIsSet = false;
}

utility::string_t VsmfUpdateData::getN1smCause() const {
  return m_N1smCause;
}

void VsmfUpdateData::setN1smCause(const utility::string_t& value) {
  m_N1smCause      = value;
  m_N1smCauseIsSet = true;
}

bool VsmfUpdateData::n1smCauseIsSet() const {
  return m_N1smCauseIsSet;
}

void VsmfUpdateData::unsetN1smCause() {
  m_N1smCauseIsSet = false;
}

int32_t VsmfUpdateData::getBackOffTimer() const {
  return m_BackOffTimer;
}

void VsmfUpdateData::setBackOffTimer(int32_t value) {
  m_BackOffTimer      = value;
  m_BackOffTimerIsSet = true;
}

bool VsmfUpdateData::backOffTimerIsSet() const {
  return m_BackOffTimerIsSet;
}

void VsmfUpdateData::unsetBackOffTimer() {
  m_BackOffTimerIsSet = false;
}

std::shared_ptr<MaReleaseIndication> VsmfUpdateData::getMaReleaseInd() const {
  return m_MaReleaseInd;
}

void VsmfUpdateData::setMaReleaseInd(
    const std::shared_ptr<MaReleaseIndication>& value) {
  m_MaReleaseInd      = value;
  m_MaReleaseIndIsSet = true;
}

bool VsmfUpdateData::maReleaseIndIsSet() const {
  return m_MaReleaseIndIsSet;
}

void VsmfUpdateData::unsetMaReleaseInd() {
  m_MaReleaseIndIsSet = false;
}

}  // namespace model
}  // namespace smf
}  // namespace oai
