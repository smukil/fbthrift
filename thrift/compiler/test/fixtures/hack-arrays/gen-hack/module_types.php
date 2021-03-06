<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * Foo
 */
class Foo implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'a',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => dict[
        'type' => \TType::STRING,
      ],
      'format' => 'harray',
    ],
    2 => dict[
      'var' => 'b',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::LST,
      'key' => dict[
        'type' => \TType::STRING,
      ],
      'val' => dict[
        'type' => \TType::LST,
        'etype' => \TType::SET,
        'elem' => dict[
          'type' => \TType::SET,
          'etype' => \TType::I32,
          'elem' => dict[
            'type' => \TType::I32,
          ],
          'format' => 'harray',
        ],
        'format' => 'harray',
      ],
      'format' => 'harray',
    ],
  ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'a' => 1,
    'b' => 2,
  };
  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'a',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'harray',
    ),
    2 => shape(
      'var' => 'b',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::LST,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::LST,
        'etype' => \TType::SET,
        'elem' => shape(
          'type' => \TType::SET,
          'etype' => \TType::I32,
          'elem' => shape(
            'type' => \TType::I32,
          ),
          'format' => 'harray',
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'a' => 1,
    'b' => 2,
  ];
  const int STRUCTURAL_ID = 5283012534631553068;
  /**
   * Original thrift field:-
   * 1: list<string> a
   */
  public vec<string> $a;
  /**
   * Original thrift field:-
   * 2: map<string, list<set<i32>>> b
   */
  public dict<string, vec<keyset<int>>> $b;

  <<__Rx>>
  public function __construct(?vec<string> $a = null, ?dict<string, vec<keyset<int>>> $b = null  ) {
    if ($a === null) {
      $this->a = vec[];
    } else {
      $this->a = $a;
    }
    if ($b === null) {
      $this->b = dict[];
    } else {
      $this->b = $b;
    }
  }

  public function getName(): string {
    return 'Foo';
  }

}

