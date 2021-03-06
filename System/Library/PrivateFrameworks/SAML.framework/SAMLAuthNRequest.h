/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/XMLWrapperDoc.h>

@class NSData, SAMLAuthNRequestElement, NSString;

@interface SAMLAuthNRequest : XMLWrapperDoc {

	NSData* _schemaData;
	SAMLAuthNRequestElement* _requestElement;

}

@property (nonatomic,retain) SAMLAuthNRequestElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,retain) NSString * issuer; 
-(void)setProviderName:(id)arg1 ;
-(void)setSubjectFromResponse:(id)arg1 ;
-(void)setForceAuthN:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLAuthNRequestElement *)requestElement;
-(void)setRequestElement:(SAMLAuthNRequestElement *)arg1 ;
-(NSString *)issuer;
-(void)setIssuer:(NSString *)arg1 ;
-(void)setIsPassive:(BOOL)arg1 ;
@end

