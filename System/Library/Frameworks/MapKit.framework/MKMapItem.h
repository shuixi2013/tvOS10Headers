/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>

@protocol GEOMapItem, GEOMapItemTransitInfo, GEOTransitAttribution, NSObject;
@class _MKMapItemPlaceAttribution, _MKMapItemPhotosAttribution, _MKMapItemReviewsAttribution, NSString, NSURL, NSTimeZone, MKMapItemMetadata, GEOPlace, _MKPlaceReservationInfo, GEOMapRegion, GEOAddress, GEOPDFlyover, NSData, GEOFeatureStyleAttributes, NSArray, GEOPDBusinessClaim, GEOMapItemDetourInfo, MKPlacemark;

@interface MKMapItem : NSObject <GEOURLSerializable> {

	BOOL _isCurrentLocation;
	BOOL _isPlaceHolder;
	id<GEOMapItem> _geoMapItem;
	BOOL _isTransitInfoUpdated;
	id<GEOMapItemTransitInfo> _updatedTransitInfo;
	id<GEOMapItemTransitInfo> _defaultTransitInfo;
	id<GEOTransitAttribution> _updatedTransitAttribution;
	_MKMapItemPlaceAttribution* _attribution;
	_MKMapItemPhotosAttribution* _photosAttribution;
	_MKMapItemReviewsAttribution* _reviewsAttribution;
	NSString* _name;
	NSString* _phoneNumber;
	NSURL* _url;
	NSTimeZone* _timeZone;
	id<NSObject> _didResolveAttributionToken;
	NSString* _shortAddress;
	NSString* _firstLocalizedCategoryName;
	BOOL _isTransitItem;
	MKMapItemMetadata* _metadata;
	GEOPlace* _place;
	_MKPlaceReservationInfo* _reservationInfo;

}

@property (nonatomic,readonly) NSString * formattedNumberOfReviews; 
@property (nonatomic,readonly) NSString * formattedNumberOfReviewsIncludingProvider; 
@property (getter=_hasDisplayableAmenities,readonly) BOOL hasDisplayableAmenities; 
@property (getter=_isEmptyContactMapItem,readonly) BOOL isEmptyContactMapItem; 
@property (assign,nonatomic) BOOL isCurrentLocation;                                                                      //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
@property (nonatomic,readonly) MKMapItemMetadata * metadata;                                                              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) GEOPlace * place;                                                                          //@synthesize place=_place - In the implementation block
@property (getter=_geoMapItem,nonatomic,readonly) id<GEOMapItemPrivate> geoMapItem; 
@property (nonatomic,readonly) NSString * yelpID; 
@property (nonatomic,readonly) BOOL isPlaceHolder;                                                                        //@synthesize isPlaceHolder=_isPlaceHolder - In the implementation block
@property (getter=_coordinate,nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (getter=_displayMapRegion,nonatomic,readonly) GEOMapRegion * displayMapRegion; 
@property (getter=_geoFenceMapRegion,nonatomic,readonly) GEOMapRegion * geoFenceMapRegion; 
@property (assign,getter=_isTransitItem,nonatomic) BOOL isTransitItem;                                                    //@synthesize isTransitItem=_isTransitItem - In the implementation block
@property (getter=_hasTransit,nonatomic,readonly) BOOL hasTransit; 
@property (getter=_hasTransitDisplayName,nonatomic,readonly) BOOL hasTransitDisplayName; 
@property (getter=_transitDisplayName,nonatomic,readonly) NSString * transitDisplayName; 
@property (getter=_hasTransitLabels,nonatomic,readonly) BOOL hasTransitLabels; 
@property (getter=_transitAttribution,nonatomic,readonly) id<GEOTransitAttribution> transitAttribution; 
@property (getter=_transitInfo,nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (getter=_geoAddress,nonatomic,readonly) GEOAddress * geoAddress; 
@property (getter=_hasFlyover,nonatomic,readonly) BOOL hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncementMessage; 
@property (getter=_hasMUID,nonatomic,readonly) BOOL hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_hasResultProviderID,nonatomic,readonly) BOOL hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_phoneNumberOptsOutOfAds,nonatomic,readonly) BOOL phoneNumberOptsOutOfAds; 
@property (getter=_firstLocalizedCategoryName,nonatomic,readonly) NSString * firstLocalizedCategoryName; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) BOOL hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceRange,nonatomic,readonly) BOOL hasPriceRange; 
@property (getter=_priceRangeString,nonatomic,readonly) NSString * priceRangeString; 
@property (getter=_shortAddress,nonatomic,readonly) NSString * shortAddress; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) BOOL hasAnyAmenities; 
@property (getter=_hasDeliveryAmenity,nonatomic,readonly) BOOL hasDeliveryAmenity; 
@property (getter=_hasDelivery,nonatomic,readonly) BOOL hasDelivery; 
@property (getter=_hasGoodForKidsAmenity,nonatomic,readonly) BOOL hasGoodForKidsAmenity; 
@property (getter=_goodForKids,nonatomic,readonly) BOOL goodForKids; 
@property (getter=_hasTakesReservationsAmenity,nonatomic,readonly) BOOL hasTakesReservationsAmenity; 
@property (getter=_takesReservations,nonatomic,readonly) BOOL takesReservations; 
@property (getter=_hasAcceptsApplePayAmenity,nonatomic,readonly) BOOL hasAcceptsApplePayAmenity; 
@property (getter=_acceptsApplePay,nonatomic,readonly) BOOL acceptsApplePay; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) BOOL hasResolvablePartialInformation; 
@property (getter=_hasOperatingHours,nonatomic,readonly) BOOL hasOperatingHours; 
@property (getter=_hasLocalizedOperatingHours,nonatomic,readonly) BOOL hasLocalizedOperatingHours; 
@property (getter=_localizedOperatingHours,nonatomic,readonly) NSString * localizedOperatingHours; 
@property (getter=_hasEncyclopedicInfo,nonatomic,readonly) BOOL hasEncyclopedicInfo; 
@property (getter=_encyclopedicInfo,nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
@property (getter=_disambiguationName,nonatomic,readonly) NSString * disambiguationName; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned long long openingHoursOptions; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_poiPinpointURLString,nonatomic,readonly) NSString * poiPinpointURLString; 
@property (getter=_hasCorrectedHomeWorkCoordinate,nonatomic,readonly) BOOL hasCorrectedHomeWorkCoordinate; 
@property (getter=_needsAttribution,nonatomic,readonly) BOOL needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_reviewsDisplayName,nonatomic,readonly) NSString * reviewsDisplayName; 
@property (getter=_attribution,nonatomic,readonly) _MKMapItemPlaceAttribution * attribution;                              //@synthesize attribution=_attribution - In the implementation block
@property (getter=_photosAttribution,nonatomic,readonly) _MKMapItemPhotosAttribution * photosAttribution;                 //@synthesize photosAttribution=_photosAttribution - In the implementation block
@property (getter=_reviewsAttribution,nonatomic,readonly) _MKMapItemReviewsAttribution * reviewsAttribution;              //@synthesize reviewsAttribution=_reviewsAttribution - In the implementation block
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_reviews,nonatomic,readonly) NSArray * reviews; 
@property (getter=_tips,nonatomic,readonly) NSArray * tips; 
@property (nonatomic,readonly) NSString * reviewsProviderDisplayName; 
@property (getter=_handle,nonatomic,readonly) NSData * handle; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) BOOL hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@property (nonatomic,retain) _MKPlaceReservationInfo * reservationInfo;                                                   //@synthesize reservationInfo=_reservationInfo - In the implementation block
@property (getter=_detourInfo,nonatomic,readonly) GEOMapItemDetourInfo * detourInfo; 
@property (getter=_externalTransitStationCode,nonatomic,readonly) NSData * externalTransitStationCode; 
@property (nonatomic,readonly) MKPlacemark * placemark; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)urlForMapItem:(id)arg1 options:(id)arg2 ;
+(id)mapItemForCurrentLocation;
+(BOOL)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 ;
+(void)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2 ;
+(void)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)plistCompatibleDictionaryFromStandardOptions:(id)arg1 ;
+(id)standardOptionsFromPlistCompatibleDictionary:(id)arg1 ;
+(id)mapItemWithDictionary:(id)arg1 ;
+(id)_sharedSessionURLForPunchoutURL:(id)arg1 ;
+(id)_sharedSessionUserInfoForPunchoutUserInfo:(id)arg1 ;
+(id)_sourceAppIdFromLaunchURL:(id)arg1 ;
+(id)_sourceAppIdFromLaunchUserInfo:(id)arg1 ;
+(void)_mapItemFromHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_mapItemsFromHandleURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_deserializeResourceOptionsFromURL:(id)arg1 error:(out id*)arg2 ;
+(id)_launchOptionsFromResourceOptionsDictionary:(id)arg1 ;
+(id)launchOptionsFromURL:(id)arg1 ;
+(id)mapItemsFromURL:(id)arg1 options:(id*)arg2 ;
+(id)urlForMapItems:(id)arg1 options:(id)arg2 ;
+(id)_urlForMapItemHandles:(id)arg1 options:(id)arg2 ;
+(id)_launchOptionsWithOptions:(id)arg1 ;
+(id)_itemWithGeoMapItem:(id)arg1 ;
+(id)mapItemWithSerializedPlaceData:(id)arg1 serializedDetourInfo:(id)arg2 currentLocation:(BOOL)arg3 ;
+(id)_itemWithAddressBookRef:(void*)arg1 geoMapItem:(id)arg2 ;
+(id)_itemWithContact:(id)arg1 geoMapItem:(id)arg2 ;
+(id)mapItemWithSerializedPlaceData:(id)arg1 ;
+(void)_mapItemsWithSerializedPlaceDataResponse:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)_mapItemWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned)arg9 normalizedUserRatingScore:(float)arg10 ;
+(void)_fillOutRequest:(id)arg1 withMapsDataString:(id)arg2 ;
+(id)contactsAddressDictionaryFromGeoAddressDictionary:(id)arg1 ;
+(id)contactsAddressKeysForGeoAddressKeys;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSURL *)url;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)phoneNumber;
-(NSTimeZone *)timeZone;
-(unsigned long long)_muid;
-(id)_styleAttributes;
-(GEOPlace *)place;
-(id)urlRepresentation;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(MKMapItemMetadata *)metadata;
-(id)_reviews;
-(int)_recommendedTransportType;
-(unsigned)_travelTimeForTransportType:(int)arg1 ;
-(unsigned)_travelDistanceForTransportType:(int)arg1 ;
-(id)_localizedCategoryNamesForType:(unsigned)arg1 ;
-(BOOL)_hasLocalizedCategoryNamesForType:(unsigned)arg1 ;
-(id)_tips;
-(id)_placeDataAsData;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_hasResultProviderID;
-(int)_resultProviderID;
-(BOOL)_hasTransit;
-(id)_transitInfo;
-(id)_transitAttribution;
-(BOOL)_hasFlyover;
-(id)_flyover;
-(id)_flyoverAnnouncementMessage;
-(BOOL)_hasMUID;
-(BOOL)_hasUserRatingScore;
-(unsigned)_sampleSizeForUserRatingScore;
-(float)_normalizedUserRatingScore;
-(BOOL)_hasPriceRange;
-(BOOL)_hasAnyAmenities;
-(BOOL)_hasDeliveryAmenity;
-(BOOL)_hasDelivery;
-(BOOL)_hasGoodForKidsAmenity;
-(BOOL)_goodForKids;
-(BOOL)_hasTakesReservationsAmenity;
-(BOOL)_takesReservations;
-(BOOL)_hasAcceptsApplePayAmenity;
-(BOOL)_acceptsApplePay;
-(BOOL)_hasOperatingHours;
-(BOOL)_hasEncyclopedicInfo;
-(id)_encyclopedicInfo;
-(id)_disambiguationName;
-(unsigned long long)_openingHoursOptions;
-(BOOL)_needsAttribution;
-(id)_webURL;
-(id)_providerURL;
-(id)_vendorID;
-(id)_poiSurveyURLString;
-(id)_poiPinpointURLString;
-(id)_attribution;
-(id)_photosAttribution;
-(id)_reviewsAttribution;
-(unsigned long long)_customIconID;
-(BOOL)_hasBusinessClaim;
-(id)_businessClaim;
-(id)initWithPlace:(id)arg1 ;
-(id)_detourInfo;
-(id)_geoMapItem;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(BOOL)isCurrentLocation;
-(id)initWithAddressDictionary:(id)arg1 ;
-(CLLocationCoordinate2D)_coordinate;
-(void)setReservationInfo:(_MKPlaceReservationInfo *)arg1 ;
-(_MKPlaceReservationInfo *)reservationInfo;
-(id)_shortAddress;
-(id)_firstLocalizedCategoryName;
-(BOOL)_isTransitItem;
-(id)initWithGeoMapItemAsCurrentLocation:(id)arg1 ;
-(id)initWithGeoMapItem:(id)arg1 isPlaceHolderPlace:(BOOL)arg2 ;
-(id)initWithPlace:(id)arg1 isPlaceHolderPlace:(BOOL)arg2 ;
-(id)initWithCLLocation:(id)arg1 ;
-(id)initWithPlacemark:(id)arg1 ;
-(void)_refreshAttribution;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(BOOL)_phoneNumberOptsOutOfAds;
-(id)_getBusiness;
-(NSString *)yelpID;
-(id)_displayMapRegion;
-(id)_geoFenceMapRegion;
-(BOOL)_hasTransitDisplayName;
-(id)_transitDisplayName;
-(BOOL)_hasTransitLabels;
-(id)_priceRangeString;
-(id)_geoAddress;
-(BOOL)_hasLocalizedOperatingHours;
-(id)_localizedOperatingHours;
-(BOOL)openInMapsWithLaunchOptions:(id)arg1 ;
-(void)openInMapsWithLaunchOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_handle;
-(id)_fullAddressWithMultiline:(BOOL)arg1 ;
-(id)_weatherDisplayName;
-(id)_activityURL:(BOOL)arg1 ;
-(BOOL)_canGetDirections;
-(id)_addressOrNil:(id)arg1 ;
-(id)_addressFormattedAsCity;
-(id)_postalAddressFromMeCardUsingAddressIdentifier:(id)arg1 ;
-(id)_addressFormattedAsMultilineAddress;
-(id)_addressFormattedAsName;
-(id)_addressFormattedAsShortenedAddress;
-(id)_addressFormattedAsSinglelineAddress;
-(id)_addressFormattedAsWeatherDisplayName;
-(id)_addressFormattedAsTitlesForMapRect:(SCD_Struct_MK1)arg1 ;
-(id)_addressFormattedAsAddressDictionary;
-(id)_reviewsDisplayName;
-(id)_attributionWithDisplayName:(id)arg1 attributionFormat:(id)arg2 logo:(id)arg3 isSnippetLogo:(BOOL)arg4 ;
-(id)_attributionFor:(id)arg1 sourceStringFormat:(id)arg2 moreSourceStringFormat:(id)arg3 imageTintColor:(id)arg4 ;
-(NSString *)reviewsProviderDisplayName;
-(id)_externalTransitStationCode;
-(BOOL)_hasCorrectedHomeWorkCoordinate;
-(BOOL)isPlaceHolder;
-(void)setIsTransitItem:(BOOL)arg1 ;
-(id)formattedNumberOfReviewsIncludingProvider:(BOOL)arg1 formatter:(id)arg2 ;
-(NSString *)formattedNumberOfReviews;
-(NSString *)formattedNumberOfReviewsIncludingProvider;
-(id)_localizedBusinessHoursWithOptions:(unsigned long long)arg1 ;
-(BOOL)_isBusinessClosed;
-(id)_reviewForIdentifier:(id)arg1 ;
-(id)_localizedBusinessHoursWithCurrentOpeningHoursOptions;
-(void)updateTransitInfoWithMapItem:(id)arg1 ;
-(id)_restaurantLink_firstVendorID;
-(id)_restaurantLink_overridenBundleIDsForVendorIDs;
-(BOOL)_hasRestaurantExtensionInfo;
-(BOOL)_restaurantLink_hasFeatureType:(unsigned long long)arg1 ;
-(id)_restaurantLink_firstProviderIdentifier;
-(unsigned long long)_restaurantExtensionModeForFirstProvider;
-(id)_restaurantLink_firstProviderPlaceIdentifier;
-(id)_restaurantLink_firstProviderDisplayName;
-(id)initWithContact:(id)arg1 ;
-(BOOL)_isEmptyContactMapItem;
-(id)_placeCardContact;
-(id)_initWithLabelMarker:(id)arg1 ;
-(BOOL)_hasDisplayableAmenities;
-(id)_mapsDataString;
-(MKPlacemark *)placemark;
@end

