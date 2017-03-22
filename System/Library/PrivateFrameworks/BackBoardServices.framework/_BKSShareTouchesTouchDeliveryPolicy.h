/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@protocol OS_xpc_object;
@class NSObject;

@interface _BKSShareTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {

	unsigned _childContextId;
	unsigned _hostContextId;
	NSObject*<OS_xpc_object> _assertionEndpoint;

}

@property (nonatomic,readonly) unsigned childContextId;              //@synthesize childContextId=_childContextId - In the implementation block
@property (nonatomic,readonly) unsigned hostContextId;               //@synthesize hostContextId=_hostContextId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithChildContextId:(unsigned)arg1 hostContextId:(unsigned)arg2 ;
-(id)matchSharingTouchesPolicy:(/*^block*/id)arg1 orCancelTouchesPolicy:(/*^block*/id)arg2 orCombinedPolicy:(/*^block*/id)arg3 ;
-(id)assertionEndpoint;
-(unsigned)childContextId;
-(unsigned)hostContextId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setAssertionEndpoint:(id)arg1 ;
@end

