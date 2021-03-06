/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INTermsAndConditions, NSArray;


@protocol INGetAvailableRestaurantReservationBookingsIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * localizedRestaurantDescriptionText; 
@property (nonatomic,copy) NSString * localizedBookingAdvisementText; 
@property (nonatomic,copy) INTermsAndConditions * termsAndConditions; 
@property (nonatomic,readonly) NSArray * availableBookings; 
@required
-(id)init;
-(long long)code;
-(NSString *)localizedBookingAdvisementText;
-(INTermsAndConditions *)termsAndConditions;
-(NSString *)localizedRestaurantDescriptionText;
-(NSArray *)availableBookings;
-(void)setLocalizedRestaurantDescriptionText:(id)arg1;
-(void)setLocalizedBookingAdvisementText:(id)arg1;
-(void)setTermsAndConditions:(id)arg1;

@end

