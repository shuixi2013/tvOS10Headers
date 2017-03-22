/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _PFRefCountableValue : NSObject <NSCopying> {

	long long _refCount;
	id _value;

}

@property (nonatomic,readonly) id value; 
-(long long)incrementRefCount;
-(long long)decrementRefCount;
-(void)dealloc;
-(id)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(long long)refCount;
@end

