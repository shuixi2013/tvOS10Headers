/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_UTTypeQuery.h>

@class NSString;

@interface _UTTypeQueryWithIdentifier : _UTTypeQuery {

	NSString* _identifier;
	BOOL _dynamic;
	BOOL _valid;

}
+(BOOL)supportsSecureCoding;
-(BOOL)_canResolveLocallyWithoutMappingDatabase;
-(BOOL)getLocallyResolvedType:(id*)arg1 orErrorWithoutMappingDatabase:(id*)arg2 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)initWithIdentifier:(id)arg1 ;
@end

