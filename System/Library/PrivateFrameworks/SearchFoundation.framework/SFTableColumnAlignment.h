/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SFTableColumnAlignment : NSObject <NSSecureCoding> {

	BOOL _isEqualWidth;
	unsigned long long _columnAlignment;
	unsigned long long _dataAlignment;

}

@property (assign) unsigned long long columnAlignment;              //@synthesize columnAlignment=_columnAlignment - In the implementation block
@property (assign) unsigned long long dataAlignment;                //@synthesize dataAlignment=_dataAlignment - In the implementation block
@property (assign) BOOL isEqualWidth;                               //@synthesize isEqualWidth=_isEqualWidth - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)textAlignment;
-(void)setColumnAlignment:(unsigned long long)arg1 ;
-(void)setDataAlignment:(unsigned long long)arg1 ;
-(void)setIsEqualWidth:(BOOL)arg1 ;
-(unsigned long long)columnAlignment;
-(unsigned long long)dataAlignment;
-(BOOL)isEqualWidth;
@end

