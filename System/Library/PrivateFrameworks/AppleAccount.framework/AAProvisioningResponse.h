/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAAuthenticationResponse.h>

@class NSDictionary, NSArray, NSString, NSNumber;

@interface AAProvisioningResponse : AAAuthenticationResponse {

	NSDictionary* _icloud;

}

@property (nonatomic,readonly) NSArray * provisionedDataclasses; 
@property (nonatomic,readonly) NSDictionary * dataclassProperties; 
@property (nonatomic,readonly) NSString * appleID; 
@property (nonatomic,readonly) NSArray * appleIDAliases; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSNumber * primaryEmailVerified; 
@property (nonatomic,readonly) NSString * iCloudAuthToken; 
@property (nonatomic,readonly) NSString * fmipAuthToken; 
@property (nonatomic,readonly) NSString * fmipSiriToken; 
@property (nonatomic,readonly) BOOL isManagedAppleID; 
@property (nonatomic,readonly) BOOL notesMigrated; 
@property (nonatomic,readonly) BOOL isSandboxAccount; 
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)appleIDAliases;
-(NSString *)primaryEmail;
-(NSNumber *)primaryEmailVerified;
-(NSString *)iCloudAuthToken;
-(NSString *)fmipAuthToken;
-(NSString *)fmipSiriToken;
-(BOOL)notesMigrated;
-(BOOL)isSandboxAccount;
-(NSString *)appleID;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSArray *)provisionedDataclasses;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSDictionary *)dataclassProperties;
-(BOOL)isManagedAppleID;
@end

