/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVServices/TVServices-Structs.h>
@interface TVSFairPlaySAPContext : NSObject {

	BOOL _setupComplete;
	FPSAPContextOpaque_Ref _fairPlaySAPContext;
	FairPlayHWInfo_* _fairPlayHardwareInfo;

}

@property (assign,getter=isSetupComplete,nonatomic) BOOL setupComplete;              //@synthesize setupComplete=_setupComplete - In the implementation block
@property (assign,nonatomic) FPSAPContextOpaque_Ref fairPlaySAPContext;              //@synthesize fairPlaySAPContext=_fairPlaySAPContext - In the implementation block
@property (assign,nonatomic) FairPlayHWInfo_* fairPlayHardwareInfo;                  //@synthesize fairPlayHardwareInfo=_fairPlayHardwareInfo - In the implementation block
+(id)_digestForData:(id)arg1 ;
-(void)dealloc;
-(FairPlayHWInfo_*)fairPlayHardwareInfo;
-(FPSAPContextOpaque_Ref)fairPlaySAPContext;
-(void)setSetupComplete:(BOOL)arg1 ;
-(BOOL)isSetupComplete;
-(id)encryptData:(id)arg1 ;
-(id)decryptData:(id)arg1 ;
-(id)signatureForData:(id)arg1 ;
-(BOOL)validateData:(id)arg1 encryptedSignature:(id)arg2 ;
-(unsigned long long)setupWithInputData:(id)arg1 outputData:(id*)arg2 ;
-(id)signatureForString:(id)arg1 ;
-(BOOL)validateString:(id)arg1 encryptedSignature:(id)arg2 ;
-(void)setFairPlaySAPContext:(FPSAPContextOpaque_Ref)arg1 ;
-(void)setFairPlayHardwareInfo:(FairPlayHWInfo_*)arg1 ;
@end

