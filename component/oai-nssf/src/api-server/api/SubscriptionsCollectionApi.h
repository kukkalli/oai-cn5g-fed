/**
 * NSSF NSSAI Availability
 * NSSF NSSAI Availability Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SubscriptionsCollectionApi.h
 *
 *
 */

#ifndef SubscriptionsCollectionApi_H_
#define SubscriptionsCollectionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include <utility>

#include "NssfEventSubscriptionCreateData.h"
#include "NssfEventSubscriptionCreatedData.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"

#include <string>

namespace oai {
namespace nssf_server {
namespace api {

using namespace oai::nssf_server::model;

class SubscriptionsCollectionApi {
 public:
  explicit SubscriptionsCollectionApi(
      const std::shared_ptr<Pistache::Rest::Router>& rtr);
  virtual ~SubscriptionsCollectionApi() = default;
  void init();

  static const std::string base;

 private:
  void setupRoutes();

  void n_ssai_availability_post_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void subscriptions_collection_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  const std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Helper function to handle unexpected Exceptions during Parameter parsing
  /// and validation. May be overriden to return custom error formats. This is
  /// called inside a catch block. Important: When overriding, do not call
  /// `throw ex;`, but instead use `throw;`.
  /// </summary>
  virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(
      const std::exception& ex) const noexcept;

  /// <summary>
  /// Helper function to handle unexpected Exceptions during processing of the
  /// request in handler functions. May be overriden to return custom error
  /// formats. This is called inside a catch block. Important: When overriding,
  /// do not call `throw ex;`, but instead use `throw;`.
  /// </summary>
  virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(
      const std::exception& ex) const noexcept;

  /// <summary>
  /// Creates subscriptions for notification about updates to NSSAI availability
  /// information
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="nssfEventSubscriptionCreateData">Subscription for
  /// notification about updates to NSSAI availability information</param>
  /// <param name="contentEncoding">Content-Encoding, described in IETF RFC 7231
  /// (optional, default to &quot;&quot;)</param>
  virtual void n_ssai_availability_post(
      const oai::nssf_server::model::NssfEventSubscriptionCreateData&
          nssfEventSubscriptionCreateData,
      const Pistache::Optional<Pistache::Http::Header::Raw>& contentEncoding,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace api
}  // namespace nssf_server
}  // namespace oai

#endif /* SubscriptionsCollectionApi_H_ */
