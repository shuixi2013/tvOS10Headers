/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSMutableAttributedString, NSMutableArray, NSMutableDictionary, NSData, NSFileWrapper, NSMutableData, NSMapTable, NSColor, NSArray, NSTextTable, NSCalendar;

@interface NSRTFReader : NSObject {

	NSMutableAttributedString* _topAttributedString;
	NSMutableAttributedString* _curAttributedString;
	NSMutableArray* _attributesStack;
	NSMutableDictionary* _curAttributes;
	unsigned _level;
	NSData* _rtfData;
	NSMutableDictionary* _fontTable;
	NSFileWrapper* _document;
	SCD_Union_NS32 _textBuffer;
	unsigned long long _textBufferIndex;
	int _rtfVersion;
	int _cocoaVersion;
	int _cocoaSubVersion;
	int _readOnly;
	int _usesScreenFonts;
	int _colorTblColorSpace;
	unsigned _defaultToUniCharEncoding;
	NSAttributeInfo _attributeInfo;
	NSMutableData* _attributeInfoStack;
	CGSize _paperSize;
	double _lMargin;
	double _rMargin;
	double _bMargin;
	double _tMargin;
	NSMutableDictionary* _documentInfoDictionary;
	CGSize _viewSize;
	int _viewScale;
	int _viewKind;
	NSMapTable* _cachedRTFFontTable;
	double _hyphenationFactor;
	double _defaultTabInterval;
	NSColor* _documentBackgroundColor;
	NSRTFPriv* _private;
	BOOL _textBufferContentsIsFat;
	BOOL _explicitCharSetEncountered;
	BOOL _isRTLDocument;
	long long _readLimit;
	long long _thumbnailLimit;
	BOOL _limitReached;
	unsigned char _textFlow;
	NSMutableArray* _layoutOrientationSections;
	unsigned long long _verticalOrientationLocation;
	NSArray* _textBlocks;
	NSMutableArray* _nestedTables;
	NSTextTable* _currentTable;
	NSTextTable* _previousTable;
	NSMutableArray* _currentRowArray;
	NSMutableArray* _previousRowArray;
	int _currentRow;
	int _currentColumn;
	int _currentDefinitionColumn;
	BOOL _currentRowIsLast;
	BOOL _setTableCells;
	unsigned long long _currentBorderEdge;
	BOOL _currentBorderIsTable;
	NSMutableDictionary* _listDefinitions;
	int _currentListNumber;
	int _currentListLevel;
	NSCalendar* _gregorianCalendar;
	NSMutableDictionary* _fontAttributesTable;

}
-(void)finalize;
-(void)setHyphenationFactor:(float)arg1 ;
-(void)setMutableAttributedString:(id)arg1 ;
-(id)initWithRTFDFileWrapper:(id)arg1 ;
-(id)initWithRTF:(id)arg1 ;
-(id)initWithRTFD:(id)arg1 ;
-(void)setReadLimit:(long long)arg1 ;
-(void)setThumbnailLimit:(long long)arg1 ;
-(void)setUsesScreenFonts:(long long)arg1 ;
-(double)defaultTabInterval;
-(void)setDefaultTabInterval:(double)arg1 ;
-(id)_currentTable;
-(void)_setRTFDFileWrapper:(id)arg1 ;
-(long long)cocoaVersion;
-(long long)cocoaSubVersion;
-(void)_ensureTableCells;
-(id)_mutableParagraphStyle;
-(void)_pushTableState;
-(void)_popTableState;
-(void)_beginTableRow;
-(void)_setTableCells;
-(void)_clearTableCells;
-(double)floatCocoaVersion;
-(void)_updateAttributes;
-(id)mutableAttributes;
-(void)_addListDefinition:(id)arg1 forKey:(long long)arg2 ;
-(id)_RTFDFileWrapper;
-(void)setPaperSize:(CGSize)arg1 ;
-(void)setViewKind:(long long)arg1 ;
-(void)setViewScale:(long long)arg1 ;
-(void)setCocoaVersion:(long long)arg1 ;
-(void)setCocoaSubVersion:(long long)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(void)setTextFlow:(unsigned long long)arg1 ;
-(unsigned long long)textFlow;
-(id)_currentTableCell;
-(unsigned long long)_currentBorderEdge;
-(BOOL)_currentBorderIsTable;
-(BOOL)_currentTableCellIsPlaceholder;
-(void)_setCurrentBorderEdge:(unsigned long long)arg1 isTable:(BOOL)arg2 ;
-(void)_setTableNestingLevel:(long long)arg1 ;
-(void)_startTableRowDefinition;
-(void)_endTableCellDefinition;
-(void)_paragraphInTable;
-(void)_endTableCell;
-(void)_lastTableRow;
-(void)_endTableRow;
-(void)_mergeTableCellsHorizontally;
-(void)_mergeTableCellsVertically;
-(id)mutableAttributedString;
-(id)attributedStringToEndOfGroup;
-(id)attributesAtEndOfGroup;
-(id)_documentInfoDictionary;
-(long long)_currentListNumber;
-(void)_setCurrentListNumber:(long long)arg1 ;
-(long long)_currentListLevel;
-(void)_setCurrentListLevel:(long long)arg1 ;
-(id)_listDefinitions;
-(void)_addOverride:(long long)arg1 forKey:(long long)arg2 ;
-(void)processString:(id)arg1 ;
-(void)_pushState;
-(void)_popState;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)setRightMargin:(double)arg1 ;
-(id)attributedString;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(long long)baseWritingDirection;
-(CGSize)paperSize;
-(CGSize)viewSize;
-(id)defaultParagraphStyle;
-(id)documentAttributes;
-(void)setLeftMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(void)setReadOnly:(long long)arg1 ;
@end

