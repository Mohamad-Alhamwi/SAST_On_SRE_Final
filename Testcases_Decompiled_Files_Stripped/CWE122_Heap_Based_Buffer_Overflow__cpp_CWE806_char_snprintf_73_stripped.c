
void FUN_001018fa(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b34(local_58);
                    /* try { // try from 00101927 to 0010199c has its CatchHandler @ 001019e8 */
  local_60 = operator_new__(100);
  memset(local_60,0x41,0x31);
  *(undefined *)((long)local_60 + 0x31) = 0;
  FUN_00101bec(local_58,&local_60);
  FUN_00101bec(local_58,&local_60);
  FUN_00101bec(local_58,&local_60);
  FUN_00101c26(local_38,local_58);
                    /* try { // try from 001019a4 to 001019a8 has its CatchHandler @ 001019d3 */
  FUN_001015b5(local_38);
  FUN_00101b54(local_38);
  FUN_00101b54(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101e64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102170(param_2);
  FUN_00102182(param_1,uVar1);
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __maxlen;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101682(param_1);
  __s = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  __maxlen = strlen(__s);
  snprintf(local_48,__maxlen,"%s",__s);
  FUN_00102558(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102469(undefined8 param_1)

{
  return param_1;
}




void FUN_00101af4(undefined8 param_1)

{
  FUN_00101ba0(param_1);
  return;
}




void FUN_00102684(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102a3a(void)

{
  return 0;
}




void FUN_00102b1e(void)

{
  return;
}




bool FUN_00102c2d(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00101b74(undefined8 param_1)

{
  FUN_00101cf2(param_1);
  FUN_00101a9e(param_1);
  return;
}




void FUN_00102734(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102b13(void)

{
  return;
}




void FUN_00102ae7(void)

{
  return;
}




void FUN_00102340(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001022af(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_00101eec(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021c4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d12(void)

{
  return;
}




undefined8 FUN_00101e9c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021c4(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102604(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102558(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101da0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102011(param_3);
  p_Var2 = (_List_node_base *)FUN_00102024(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001020ee(param_1,1);
  return;
}




undefined8 FUN_00102024(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001022e2(param_1);
  uVar2 = FUN_00101fa6(param_1);
  FUN_00102306(local_38,uVar2,uVar1);
  uVar3 = FUN_00102011(param_2);
  uVar4 = FUN_00101790(uVar1);
  FUN_0010237f(uVar2,uVar4,uVar3);
  FUN_001023bc(local_38,0);
  FUN_00102340(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




ulong FUN_00102848(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101a22(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102558("Calling good()...");
  FUN_00101a12();
  FUN_00102558("Finished good()");
  FUN_00102558("Calling bad()...");
  FUN_001017e2();
  FUN_00102558("Finished bad()");
  return 0;
}




void FUN_001025d8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101790(long param_1)

{
  FUN_001017b2(param_1 + 0x10);
  return;
}




void FUN_00102414(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102a79(void)

{
  return;
}




void FUN_00102306(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102469(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_0010237f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102011(param_3);
  FUN_0010247c(param_1,param_2,uVar1);
  return;
}




void FUN_00102b08(void)

{
  return;
}




void FUN_00102b29(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102a8f(void)

{
  return;
}




void FUN_001021c4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 * FUN_00102208(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001023de(void)

{
  return;
}




void FUN_001017b2(undefined8 param_1)

{
  FUN_001017d0(param_1);
  return;
}




void FUN_00102a9a(void)

{
  return;
}




void FUN_00102d43(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102118(undefined8 param_1,undefined8 param_2)

{
  FUN_00102146(param_1,param_2);
  return param_1;
}




void FUN_00102d24(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010262e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101e01(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102118(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101772(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102ad1(void)

{
  return;
}




void FUN_0010275c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102ac6(void)

{
  return;
}




void FUN_001015b5(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __maxlen;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101682(param_1);
  __s = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  __maxlen = strlen(__s);
  snprintf(local_48,__maxlen,"%s",__s);
  FUN_00102558(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_001021e2(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010222c(&local_18);
    FUN_0010224e(local_10,uVar2);
    FUN_00102208(&local_18);
  }
  return;
}




void FUN_001023f2(long param_1)

{
  FUN_001024c0(param_1 + 0x10);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ee0)();
  return;
}




void FUN_00102d90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101430();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00102adc(void)

{
  return;
}




void FUN_001027b5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102170(undefined8 param_1)

{
  return param_1;
}




void FUN_0010247c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102011(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a87(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00101e52(undefined8 param_1)

{
  return param_1;
}




void FUN_001022af(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102414(param_1,param_2,param_3);
  return;
}




void FUN_00102af2(void)

{
  return;
}




undefined8 FUN_001016e0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101772(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long * FUN_0010172c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102d62(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001017e2(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b34(local_58);
                    /* try { // try from 0010180f to 00101884 has its CatchHandler @ 001018d0 */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  FUN_00101bec(local_58,&local_60);
  FUN_00101bec(local_58,&local_60);
  FUN_00101bec(local_58,&local_60);
  FUN_00101c26(local_38,local_58);
                    /* try { // try from 0010188c to 00101890 has its CatchHandler @ 001018bb */
  FUN_001014e9(local_38);
  FUN_00101b54(local_38);
  FUN_00101b54(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102787(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_0010252e(undefined8 param_1)

{
  return param_1;
}




void FUN_001027e8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101a87(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_001023bc(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102a84(void)

{
  return;
}




undefined8 FUN_001017d0(undefined8 param_1)

{
  return param_1;
}




void FUN_00101bec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016e0(param_1);
  FUN_00101da0(param_1,uVar1,param_2);
  return;
}




void FUN_00101cf2(undefined8 param_1)

{
  FUN_00101f96(param_1);
  return;
}




void FUN_00101b54(undefined8 param_1)

{
  FUN_00101bc0(param_1);
  return;
}




void FUN_001026da(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101fb8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010229c(param_1,param_2);
  return;
}




void FUN_00102a63(void)

{
  return;
}




undefined8 FUN_00102c88(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101bc0(undefined8 param_1)

{
  FUN_00101d22(param_1);
  FUN_00101af4(param_1);
  return;
}




void FUN_00102182(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102170(param_2);
  FUN_00102146(param_1,uVar1);
  FUN_00101a9e(param_1);
  return;
}




undefined8 FUN_00102cab(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




undefined8 FUN_00102540(void)

{
  return 0x555555555555555;
}




void FUN_00101abe(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101b34(undefined8 param_1)

{
  FUN_00101b14(param_1);
  return;
}




undefined8 FUN_00102011(undefined8 param_1)

{
  return param_1;
}




void FUN_001022e2(undefined8 param_1)

{
  FUN_0010243b(param_1,1);
  return;
}




undefined8 FUN_00102a2b(void)

{
  return 1;
}




void FUN_00102aa5(void)

{
  return;
}




void FUN_00102abb(void)

{
  return;
}




ulong FUN_0010294c(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010309c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00102a49(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010224e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102011(param_2);
  uVar2 = FUN_001016e0(param_1);
  FUN_00101da0(param_1,uVar2,uVar1);
  return;
}




void FUN_0010243b(undefined8 param_1,undefined8 param_2)

{
  FUN_001024de(param_1,param_2,0);
  return;
}




void FUN_00102afd(void)

{
  return;
}




void FUN_00101fe2(undefined8 param_1,undefined8 param_2)

{
  FUN_001022af(param_1,param_2,1);
  return;
}




undefined8 FUN_00101fa6(undefined8 param_1)

{
  return param_1;
}




void FUN_00101682(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016e0(param_1);
  FUN_0010172c(&local_18);
  FUN_00101750(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101750(undefined8 *param_1)

{
  FUN_00101790(*param_1);
  return;
}




void FUN_001024c0(undefined8 param_1)

{
  FUN_0010252e(param_1);
  return;
}




void FUN_0010222c(undefined8 *param_1)

{
  FUN_001023f2(*param_1);
  return;
}




void FUN_00102ab0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00101d22(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101790(local_20);
    uVar3 = FUN_00101fa6(param_1);
    FUN_00101fb8(uVar3,uVar2);
    FUN_00101fe2(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101f96(void)

{
  return;
}




void FUN_00101ba0(undefined8 param_1)

{
  FUN_00101d12(param_1);
  return;
}




void FUN_00102146(undefined8 param_1,undefined8 param_2)

{
  FUN_001023de(param_1,param_2);
  return;
}




void FUN_001026af(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001020ee(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_001021e2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001024de(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102540(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102659(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102b60(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b29,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_0010229c(void)

{
  return;
}




void FUN_00101c26(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101e52(param_2);
  FUN_00101e01(&local_21,uVar1);
  FUN_00101e64(param_1,&local_21);
  FUN_00101ba0(&local_21);
  uVar1 = FUN_00101eec(param_2);
  uVar2 = FUN_00101e9c(param_2);
                    /* try { // try from 00101cb2 to 00101cb6 has its CatchHandler @ 00101cb9 */
  FUN_00101f38(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e00(void)

{
  return;
}




void FUN_00101a12(void)

{
  FUN_001018fa();
  return;
}




void FUN_00101a9e(undefined8 param_1)

{
  FUN_00101abe(param_1);
  return;
}




void FUN_00101b14(undefined8 param_1)

{
  FUN_00101b74(param_1);
  return;
}




void FUN_001025b0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010257e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102a6e(void)

{
  return;
}



