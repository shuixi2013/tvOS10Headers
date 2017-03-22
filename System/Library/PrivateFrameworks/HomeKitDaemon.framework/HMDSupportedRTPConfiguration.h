/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraTLVBase.h>
#import <libobjc.A.dylib/HMDCameraTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMDSupportedRTPConfiguration : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding> {

	NSArray* _srtpCryptoSuites;

}

@property (nonatomic,copy,readonly) NSArray * srtpCryptoSuites;              //@synthesize srtpCryptoSuites=_srtpCryptoSuites - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSArray *)srtpCryptoSuites;
-(id)initWithCryptoSuites:(id)arg1 ;
@end

