<?php

// Generated by Haxe 3.3.0
class thx__Url_Url_Impl_ {
	public function __construct(){}
	static $pattern;
	static function fromString($s) {
		return thx__Url_Url_Impl_::parse($s, true);
	}
	static function parse($s, $parseQueryString) {
		$tmp = !thx__Url_Url_Impl_::$pattern->match($s);
		if($tmp) {
			throw new HException(new thx_Error("unable to parse \"" . _hx_string_or_null($s) . "\" to Url", null, _hx_anonymous(array("fileName" => "Url.hx", "lineNumber" => 21, "className" => "thx._Url.Url_Impl_", "methodName" => "parse"))));
		}
		$port = thx__Url_Url_Impl_::$pattern->matched(12);
		$tmp1 = thx__Url_Url_Impl_::$pattern->matched(4);
		$tmp2 = thx__Url_Url_Impl_::$pattern->matched(5);
		$tmp3 = $tmp2 === "//";
		$tmp4 = thx__Url_Url_Impl_::$pattern->matched(7);
		$tmp5 = thx__Url_Url_Impl_::$pattern->matched(11);
		$tmp6 = null;
		if(null === $port) {
			$tmp6 = null;
		} else {
			$tmp6 = Std::parseInt($port);
		}
		$tmp7 = thx__Url_Url_Impl_::$pattern->matched(13);
		$tmp8 = thx__Url_Url_Impl_::$pattern->matched(17);
		$o = _hx_anonymous(array("protocol" => $tmp1, "slashes" => $tmp3, "auth" => $tmp4, "hostName" => $tmp5, "port" => $tmp6, "pathName" => $tmp7, "queryString" => null, "search" => null, "hash" => $tmp8));
		$tmp9 = thx__Url_Url_Impl_::$pattern->matched(16);
		thx__Url_Url_Impl_::set_search($o, $tmp9);
		return $o;
	}
	static function equals($self, $that) {
		return thx__Url_Url_Impl_::equalsTo($self, $that);
	}
	static function equalsTo($this1, $that) {
		$tmp = null;
		$tmp1 = null;
		$tmp2 = null;
		$tmp3 = null;
		$tmp4 = null;
		$tmp5 = null;
		$tmp6 = null;
		if($this1->protocol === $that->protocol) {
			$tmp6 = (is_object($_t = $this1->slashes) && ($_t instanceof Enum) ? $_t == $that->slashes : _hx_equal($_t, $that->slashes));
		} else {
			$tmp6 = false;
		}
		if($tmp6) {
			$tmp5 = $this1->auth === $that->auth;
		} else {
			$tmp5 = false;
		}
		if($tmp5) {
			$tmp4 = $this1->hostName === $that->hostName;
		} else {
			$tmp4 = false;
		}
		if($tmp4) {
			$tmp3 = $this1->port === $that->port;
		} else {
			$tmp3 = false;
		}
		if($tmp3) {
			$tmp2 = $this1->pathName === $that->pathName;
		} else {
			$tmp2 = false;
		}
		if($tmp2) {
			$tmp1 = thx__QueryString_QueryString_Impl_::equals($this1->queryString, $that->queryString);
		} else {
			$tmp1 = false;
		}
		if($tmp1) {
			$tmp7 = thx__Url_Url_Impl_::get_search($that);
			$tmp = $this1->search === $tmp7;
		} else {
			$tmp = false;
		}
		if($tmp) {
			return $this1->hash === $that->hash;
		} else {
			return false;
		}
	}
	static function concatString($this1, $that) {
		$copy = thx__Url_Url_Impl_::hclone($this1);
		if(thx_Strings::isEmpty($this1->pathName)) {
			$tmp = !StringTools::startsWith($that, "/");
			if($tmp) {
				$that = "/" . _hx_string_or_null($that);
			}
			$copy->pathName = $that;
		} else {
			$tmp1 = StringTools::startsWith($that, "/");
			if($tmp1) {
				$that = _hx_substring($that, 1, null);
			}
			$tmp2 = StringTools::endsWith($this1->pathName, "/");
			if($tmp2) {
				$copy->pathName = _hx_string_or_null($copy->pathName) . _hx_string_or_null($that);
			} else {
				$copy->pathName = _hx_string_or_null($copy->pathName) . "/" . _hx_string_or_null($that);
			}
		}
		return $copy;
	}
	static function toString($this1) {
		if($this1->hostName !== null) {
			$tmp = null;
			if($this1->protocol !== null) {
				$tmp = _hx_string_or_null($this1->protocol) . ":";
			} else {
				$tmp = "";
			}
			$tmp1 = "" . _hx_string_or_null($tmp);
			$tmp2 = null;
			if($this1->slashes) {
				$tmp2 = "//";
			} else {
				$tmp2 = "";
			}
			$tmp3 = _hx_string_or_null($tmp1) . _hx_string_or_null($tmp2);
			$tmp4 = null;
			if($this1->auth !== null) {
				$tmp4 = _hx_string_or_null($this1->auth) . "@";
			} else {
				$tmp4 = "";
			}
			$tmp5 = _hx_string_or_null($tmp3) . _hx_string_or_null($tmp4);
			$tmp6 = null;
			if($this1->port !== null) {
				$tmp6 = ":" . _hx_string_rec($this1->port, "");
			} else {
				$tmp6 = "";
			}
			$tmp7 = _hx_string_or_null($tmp5) . _hx_string_or_null((_hx_string_or_null($this1->hostName) . _hx_string_or_null($tmp6)));
			$tmp8 = null;
			$tmp9 = null;
			if($this1->search === null) {
				if($this1->queryString !== null) {
					$tmp9 = !(!$this1->queryString->iterator()->hasNext());
				} else {
					$tmp9 = false;
				}
			} else {
				$tmp9 = true;
			}
			if($tmp9) {
				$tmp10 = thx__Url_Url_Impl_::get_search($this1);
				$tmp8 = "?" . _hx_string_or_null($tmp10);
			} else {
				$tmp8 = "";
			}
			$tmp11 = _hx_string_or_null($tmp7) . _hx_string_or_null((_hx_string_or_null($this1->pathName) . _hx_string_or_null($tmp8)));
			$tmp12 = null;
			if($this1->hash !== null) {
				$tmp12 = "#" . _hx_string_or_null($this1->hash);
			} else {
				$tmp12 = "";
			}
			return _hx_string_or_null($tmp11) . _hx_string_or_null($tmp12);
		} else {
			$tmp13 = null;
			$tmp14 = null;
			if($this1->search === null) {
				if($this1->queryString !== null) {
					$tmp14 = !(!$this1->queryString->iterator()->hasNext());
				} else {
					$tmp14 = false;
				}
			} else {
				$tmp14 = true;
			}
			if($tmp14) {
				$tmp15 = thx__Url_Url_Impl_::get_search($this1);
				$tmp13 = "?" . _hx_string_or_null($tmp15);
			} else {
				$tmp13 = "";
			}
			$tmp16 = "" . _hx_string_or_null((_hx_string_or_null($this1->pathName) . _hx_string_or_null($tmp13)));
			$tmp17 = null;
			if($this1->hash !== null) {
				$tmp17 = "#" . _hx_string_or_null($this1->hash);
			} else {
				$tmp17 = "";
			}
			return _hx_string_or_null($tmp16) . _hx_string_or_null($tmp17);
		}
	}
	static function hclone($this1) {
		$tmp = $this1->slashes;
		$tmp1 = $this1->port;
		$tmp2 = thx__QueryString_QueryString_Impl_::hclone($this1->queryString);
		$tmp3 = thx__Url_Url_Impl_::get_search($this1);
		return _hx_anonymous(array("protocol" => $this1->protocol, "slashes" => $tmp, "auth" => $this1->auth, "hostName" => $this1->hostName, "port" => $tmp1, "pathName" => $this1->pathName, "queryString" => $tmp2, "search" => $tmp3, "hash" => $this1->hash));
	}
	static function ensureQueryString($this1) {
		if($this1->queryString !== null) {
			return $this1->queryString;
		} else {
			$value = new haxe_ds_StringMap();
			if(null !== $value) {
				$this1->search = null;
			}
			return $this1->queryString = $value;
		}
	}
	static function get_auth($this1) {
		return $this1->auth;
	}
	static function set_auth($this1, $value) {
		return $this1->auth = $value;
	}
	static function get_hasAuth($this1) {
		return $this1->auth !== null;
	}
	static function get_hasHash($this1) {
		return $this1->hash !== null;
	}
	static function get_hasPort($this1) {
		return $this1->port !== null;
	}
	static function get_hasProtocol($this1) {
		return $this1->protocol !== null;
	}
	static function get_hasQueryString($this1) {
		if($this1->queryString !== null) {
			return !(!$this1->queryString->iterator()->hasNext());
		} else {
			return false;
		}
	}
	static function get_hasSearch($this1) {
		if($this1->search === null) {
			if($this1->queryString !== null) {
				return !(!$this1->queryString->iterator()->hasNext());
			} else {
				return false;
			}
		} else {
			return true;
		}
	}
	static function get_host($this1) {
		$tmp = null;
		if($this1->port !== null) {
			$tmp = ":" . _hx_string_rec($this1->port, "");
		} else {
			$tmp = "";
		}
		return _hx_string_or_null($this1->hostName) . _hx_string_or_null($tmp);
	}
	static function set_host($this1, $host) {
		$p = _hx_index_of($host, ":", null);
		if($p < 0) {
			$this1->hostName = $host;
			$this1->port = null;
		} else {
			$this1->hostName = _hx_substring($host, 0, $p);
			$tmp = _hx_substring($host, $p + 1, null);
			$this1->port = Std::parseInt($tmp);
		}
		return $host;
	}
	static function get_hostName($this1) {
		return $this1->hostName;
	}
	static function set_hostName($this1, $hostName) {
		return $this1->hostName = $hostName;
	}
	static function get_href($this1) {
		return thx__Url_Url_Impl_::toString($this1);
	}
	static function set_href($this1, $value) {
		$this1 = thx__Url_Url_Impl_::parse($value, true);
		return $value;
	}
	static function get_isAbsolute($this1) {
		return $this1->hostName !== null;
	}
	static function get_isRelative($this1) {
		return $this1->hostName === null;
	}
	static function get_path($this1) {
		$tmp = null;
		$tmp1 = null;
		if($this1->search === null) {
			if($this1->queryString !== null) {
				$tmp1 = !(!$this1->queryString->iterator()->hasNext());
			} else {
				$tmp1 = false;
			}
		} else {
			$tmp1 = true;
		}
		if($tmp1) {
			$tmp2 = thx__Url_Url_Impl_::get_search($this1);
			$tmp = "?" . _hx_string_or_null($tmp2);
		} else {
			$tmp = "";
		}
		return _hx_string_or_null($this1->pathName) . _hx_string_or_null($tmp);
	}
	static function set_path($this1, $value) {
		$p = _hx_index_of($value, "?", null);
		if($p < 0) {
			$this1->pathName = $value;
			$this1->search = null;
			$this1->queryString = null;
		} else {
			$this1->pathName = _hx_substring($value, 0, $p);
			$tmp = _hx_substring($value, $p + 1, null);
			thx__Url_Url_Impl_::set_search($this1, $tmp);
		}
		return $value;
	}
	static function get_pathName($this1) {
		return $this1->pathName;
	}
	static function set_pathName($this1, $value) {
		return $this1->pathName = $value;
	}
	static function get_port($this1) {
		return $this1->port;
	}
	static function set_port($this1, $value) {
		return $this1->port = $value;
	}
	static function get_protocol($this1) {
		return $this1->protocol;
	}
	static function set_protocol($this1, $value) {
		$tmp = null;
		if(null === $value) {
			$tmp = null;
		} else {
			$tmp = strtolower($value);
		}
		return $this1->protocol = $tmp;
	}
	static function get_hash($this1) {
		return $this1->hash;
	}
	static function set_hash($this1, $value) {
		return $this1->hash = $value;
	}
	static function get_slashes($this1) {
		return $this1->slashes;
	}
	static function set_slashes($this1, $value) {
		return $this1->slashes = $value;
	}
	static function get_queryString($this1) {
		return $this1->queryString;
	}
	static function set_queryString($this1, $value) {
		if(null !== $value) {
			$this1->search = null;
		}
		return $this1->queryString = $value;
	}
	static function get_search($this1) {
		$tmp = null;
		if(null !== $this1->search) {
			$tmp = "" !== $this1->search;
		} else {
			$tmp = false;
		}
		if($tmp) {
			return $this1->search;
		} else {
			return thx__QueryString_QueryString_Impl_::toStringWithSymbols($this1->queryString, thx__QueryString_QueryString_Impl_::$separator, thx__QueryString_QueryString_Impl_::$assignment, (isset(thx__QueryString_QueryString_Impl_::$encodeURIComponent) ? thx__QueryString_QueryString_Impl_::$encodeURIComponent: array("thx__QueryString_QueryString_Impl_", "encodeURIComponent")));
		}
	}
	static function set_search($this1, $value) {
		$qs = null;
		try {
			$qs = thx__QueryString_QueryString_Impl_::parseWithSymbols($value, thx__QueryString_QueryString_Impl_::$separator, thx__QueryString_QueryString_Impl_::$assignment, (isset(thx__QueryString_QueryString_Impl_::$decodeURIComponent) ? thx__QueryString_QueryString_Impl_::$decodeURIComponent: array("thx__QueryString_QueryString_Impl_", "decodeURIComponent")));
		}catch(Exception $__hx__e) {
			$_ex_ = ($__hx__e instanceof HException) && $__hx__e->getCode() == null ? $__hx__e->e : $__hx__e;
			$e = $_ex_;
			{
				$qs = null;
			}
		}
		$tmp = null;
		if($qs !== null) {
			$tmp1 = $qs->keys();
			$arr = thx_Iterators::toArray($tmp1);
			$tmp2 = $arr->length === 0;
			if($tmp2) {
				$tmp = true;
			} else {
				$tmp3 = $arr->length !== 1;
				if($tmp3) {
					$tmp = false;
				} else {
					$tmp = $qs->get($arr[0])->length === 0;
				}
			}
		} else {
			$tmp = true;
		}
		if($tmp) {
			$this1->search = $value;
			$this1->queryString = null;
		} else {
			$this1->queryString = $qs;
			$this1->search = null;
		}
		return $value;
	}
	static $__properties__ = array("set_slashes" => "set_slashes","get_slashes" => "get_slashes","set_search" => "set_search","get_search" => "get_search","set_queryString" => "set_queryString","get_queryString" => "get_queryString","set_protocol" => "set_protocol","get_protocol" => "get_protocol","set_port" => "set_port","get_port" => "get_port","set_pathName" => "set_pathName","get_pathName" => "get_pathName","set_path" => "set_path","get_path" => "get_path","get_isRelative" => "get_isRelative","get_isAbsolute" => "get_isAbsolute","set_href" => "set_href","get_href" => "get_href","set_hostName" => "set_hostName","get_hostName" => "get_hostName","set_host" => "set_host","get_host" => "get_host","get_hasSearch" => "get_hasSearch","get_hasQueryString" => "get_hasQueryString","get_hasProtocol" => "get_hasProtocol","get_hasPort" => "get_hasPort","get_hasHash" => "get_hasHash","get_hasAuth" => "get_hasAuth","set_hash" => "set_hash","get_hash" => "get_hash","set_auth" => "set_auth","get_auth" => "get_auth");
	function __toString() { return 'thx._Url.Url_Impl_'; }
}
thx__Url_Url_Impl_::$pattern = new EReg("^((((?:([^:/#\\?]+):)?(?:(//)?((?:(([^:@/#\\?]+)(?:[:]([^:@/#\\?]+))?)@)?(([^:/#\\?\\]\\[]+|\\[[^/\\]@#?]+\\])(?:[:]([0-9]+))?))?)?)?((/?(?:[^/\\?#]+/+)*)([^\\?#]*)))?(?:\\?([^#]+))?)(?:#(.*))?", "");
