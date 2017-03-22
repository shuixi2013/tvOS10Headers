/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface SKTileStamp : NSObject <NSCoding> {

	unsigned _columns;
	unsigned _rows;
	unsigned* _tileData;

}

@property (nonatomic,readonly) unsigned long long numberOfColumns; 
@property (nonatomic,readonly) unsigned long long numberOfRows; 
@property (nonatomic,readonly) unsigned* tileData; 
+(id)tileStampWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 tileData:(unsigned*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(void)setTileData:(unsigned*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 tileData:(unsigned*)arg3 ;
-(unsigned*)tileData;
-(id)tileDefinitionsForTileMap:(id)arg1 ;
@end

