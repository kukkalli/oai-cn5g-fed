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

/*
 * ApiException.h
 *
 * This is the exception being thrown in case the api call was not successful
 */

#ifndef OAI_SMF_API_ApiException_H_
#define OAI_SMF_API_ApiException_H_

#include <memory>
#include <map>

#include <cpprest/details/basic_types.h>
#include <cpprest/http_msg.h>

namespace oai {
namespace smf {
namespace api {

class ApiException : public web::http::http_exception {
 public:
  ApiException(
      int errorCode, const utility::string_t& message,
      std::shared_ptr<std::istream> content = nullptr);
  ApiException(
      int errorCode, const utility::string_t& message,
      std::map<utility::string_t, utility::string_t>& headers,
      std::shared_ptr<std::istream> content = nullptr);
  virtual ~ApiException();

  std::map<utility::string_t, utility::string_t>& getHeaders();
  std::shared_ptr<std::istream> getContent() const;

 protected:
  std::shared_ptr<std::istream> m_Content;
  std::map<utility::string_t, utility::string_t> m_Headers;
};

}  // namespace api
}  // namespace smf
}  // namespace oai

#endif /* OAI_SMF_API_ApiBase_H_ */
