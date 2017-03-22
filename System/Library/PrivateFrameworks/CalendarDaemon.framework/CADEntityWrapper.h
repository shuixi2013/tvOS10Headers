/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, EKObjectID, NSMutableDictionary;

@interface CADEntityWrapper : NSObject <NSSecureCoding> {

	int _entityType;
	int _rowID;
	NSArray* _loadedKeys;
	NSArray* _loadedValues;
	EKObjectID* _objectID;
	NSMutableDictionary* _loadedProperties;
	BOOL _deleted;

}

@property (nonatomic,readonly) BOOL deleted;              //@synthesize deleted=_deleted - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)deleted;
-(id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2 ;
-(id)initWithCalEntity:(void*)arg1 ;
-(id)loadedProperties;
-(id)objectID;
@end

