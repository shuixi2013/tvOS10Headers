/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UINibStringIDTable : NSObject {

	UIStringIDTableBucket* table;
	UIStringIDTableBucket* buckets;
	unsigned long long hashMask;
	unsigned long long count;

}
-(void)dealloc;
-(long long)count;
-(BOOL)lookupKey:(id)arg1 identifier:(long long*)arg2 ;
-(id)initWithKeysTransferingOwnership:(id*)arg1 count:(unsigned long long)arg2 ;
@end
