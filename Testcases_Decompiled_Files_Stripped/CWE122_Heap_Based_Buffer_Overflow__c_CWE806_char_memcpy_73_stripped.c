
void FUN_00101774(undefined8 param_1)

{
  FUN_00101792(param_1);
  return;
}




void FUN_00101d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101ff9(param_3);
  p_Var2 = (_List_node_base *)FUN_0010200c(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001020d6(param_1,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_001023da(long param_1)

{
  FUN_001024a8(param_1 + 0x10);
  return;
}




undefined8 FUN_00101a6f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001025ec(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_00102830(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ae5(void)

{
  return;
}




void FUN_00102b06(void)

{
  return;
}




void FUN_00101afc(undefined8 param_1)

{
  FUN_00101b5c(param_1);
  return;
}




void FUN_0010266c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102ada(void)

{
  return;
}




void FUN_00102aae(void)

{
  return;
}




void FUN_00102297(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001023fc(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101e3a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101bd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016a2(param_1);
  FUN_00101d88(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_00101de9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102100(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102566(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001024c6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102528(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101cda(undefined8 param_1)

{
  FUN_00101f7e(param_1);
  return;
}




void FUN_00101fa0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102284(param_1,param_2);
  return;
}




void FUN_0010276f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001017a4(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b1c(local_58);
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
                    /* try { // try from 0010181c to 00101859 has its CatchHandler @ 001018a5 */
  FUN_00101bd4(local_58,&local_60);
  FUN_00101bd4(local_58,&local_60);
  FUN_00101bd4(local_58,&local_60);
  FUN_00101c0e(local_38,local_58);
                    /* try { // try from 00101861 to 00101865 has its CatchHandler @ 00101890 */
  FUN_001014c9(local_38);
  FUN_00101b3c(local_38);
  FUN_00101b3c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102540(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long * FUN_001016ee(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




long FUN_001023a4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




int FUN_00102a31(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102284(void)

{
  return;
}




void FUN_001022ca(undefined8 param_1)

{
  FUN_00102423(param_1,1);
  return;
}




void FUN_00102acf(void)

{
  return;
}




void FUN_00102af0(void)

{
  return;
}




void FUN_00102a56(void)

{
  return;
}




void FUN_0010212e(undefined8 param_1,undefined8 param_2)

{
  FUN_001023c6(param_1,param_2);
  return;
}




void FUN_0010216a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102158(param_2);
  FUN_0010212e(param_1,uVar1);
  FUN_00101a86(param_1);
  return;
}




void FUN_00102328(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102297(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101712(undefined8 *param_1)

{
  FUN_00101752(*param_1);
  return;
}




void FUN_00102a61(void)

{
  return;
}




undefined8 FUN_00102c70(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101ff9(undefined8 param_1)

{
  return param_1;
}




bool FUN_00102c15(pthread_t *param_1)

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




void FUN_00102598(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101cfa(void)

{
  return;
}




undefined8 FUN_001016a2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101734(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a98(void)

{
  return;
}




void FUN_00102697(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a8d(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00101e4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102158(param_2);
  FUN_0010216a(param_1,uVar1);
  return;
}




void FUN_00102367(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ff9(param_3);
  FUN_00102464(param_1,param_2,uVar1);
  return;
}




void FUN_00102d0c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102aa3(void)

{
  return;
}




void FUN_0010271c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001020d6(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_001023fc(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101d0a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101752(local_20);
    uVar3 = FUN_00101f8e(param_1);
    FUN_00101fa0(uVar3,uVar2);
    FUN_00101fca(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102214(undefined8 *param_1)

{
  FUN_001023da(*param_1);
  return;
}




void FUN_00102ab9(void)

{
  return;
}




void FUN_001014c9(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101644(param_1);
  __s = (char *)*puVar1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(__s);
  memcpy(&local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_00102540(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101586(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101644(param_1);
  __s = (char *)*puVar1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(__s);
  memcpy(&local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_00102540(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c93(undefined8 *param_1)

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




void FUN_00101752(long param_1)

{
  FUN_00101774(param_1 + 0x10);
  return;
}




void FUN_001026c2(undefined4 param_1)

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




void FUN_00102464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101ff9(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a6f(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102744(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001018cf(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b1c(local_58);
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,0x31);
  *(undefined *)((long)local_60 + 0x31) = 0;
                    /* try { // try from 00101947 to 00101984 has its CatchHandler @ 001019d0 */
  FUN_00101bd4(local_58,&local_60);
  FUN_00101bd4(local_58,&local_60);
  FUN_00101bd4(local_58,&local_60);
  FUN_00101c0e(local_38,local_58);
                    /* try { // try from 0010198c to 00101990 has its CatchHandler @ 001019bb */
  FUN_00101586(local_38);
  FUN_00101b3c(local_38);
  FUN_00101b3c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001022ee(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102451(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102a4b(void)

{
  return;
}




void FUN_00101734(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101b5c(undefined8 param_1)

{
  FUN_00101cda(param_1);
  FUN_00101a86(param_1);
  return;
}




void FUN_00101ba8(undefined8 param_1)

{
  FUN_00101d0a(param_1);
  FUN_00101adc(param_1);
  return;
}




void FUN_00101adc(undefined8 param_1)

{
  FUN_00101b88(param_1);
  return;
}




void FUN_00102641(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001021ca(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102214(&local_18);
    FUN_00102236(local_10,uVar2);
    FUN_001021f0(&local_18);
  }
  return;
}




undefined8 FUN_00102a13(void)

{
  return 1;
}




void FUN_00102b11(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101b3c(undefined8 param_1)

{
  FUN_00101ba8(param_1);
  return;
}




undefined8 FUN_00102100(undefined8 param_1,undefined8 param_2)

{
  FUN_0010212e(param_1,param_2);
  return param_1;
}




undefined8 FUN_00102b48(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b11,local_18);
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




void FUN_001024a8(undefined8 param_1)

{
  FUN_00102516(param_1);
  return;
}




undefined8 FUN_00101a0a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102540("Calling good()...");
  FUN_001019fa();
  FUN_00102540("Finished good()");
  FUN_00102540("Calling bad()...");
  FUN_001017a4();
  FUN_00102540("Finished bad()");
  return 0;
}




void FUN_00101aa6(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101f8e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102236(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101ff9(param_2);
  uVar2 = FUN_001016a2(param_1);
  FUN_00101d88(param_1,uVar2,uVar1);
  return;
}




void FUN_001027d0(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102a6c(void)

{
  return;
}




void FUN_00102a82(void)

{
  return;
}




void FUN_0010279d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_00102934(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001021ca(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001023c6(void)

{
  return;
}




void FUN_00102ac4(void)

{
  return;
}




void FUN_00101f7e(void)

{
  return;
}




undefined8 FUN_00101ed4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021ac(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101410();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101644(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016a2(param_1);
  FUN_001016ee(&local_18);
  FUN_00101712(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102423(undefined8 param_1,undefined8 param_2)

{
  FUN_001024c6(param_1,param_2,0);
  return;
}




void FUN_001021ac(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a77(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ee8)();
  return;
}




void FUN_00102df0(void)

{
  return;
}




void FUN_00101c0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101e3a(param_2);
  FUN_00101de9(&local_21,uVar1);
  FUN_00101e4c(param_1,&local_21);
  FUN_00101b88(&local_21);
  uVar1 = FUN_00101ed4(param_2);
  uVar2 = FUN_00101e84(param_2);
                    /* try { // try from 00101c9a to 00101c9e has its CatchHandler @ 00101ca1 */
  FUN_00101f20(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e84(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021ac(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b1c(undefined8 param_1)

{
  FUN_00101afc(param_1);
  return;
}




undefined8 FUN_0010200c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001022ca(param_1);
  uVar2 = FUN_00101f8e(param_1);
  FUN_001022ee(local_38,uVar2,uVar1);
  uVar3 = FUN_00101ff9(param_2);
  uVar4 = FUN_00101752(uVar1);
  FUN_00102367(uVar2,uVar4,uVar3);
  FUN_001023a4(local_38,0);
  FUN_00102328(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102616(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102d4a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101fca(undefined8 param_1,undefined8 param_2)

{
  FUN_00102297(param_1,param_2,1);
  return;
}




undefined8 FUN_00102158(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102451(undefined8 param_1)

{
  return param_1;
}




void FUN_001025c0(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102afb(void)

{
  return;
}




undefined8 * FUN_001021f0(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00101b88(undefined8 param_1)

{
  FUN_00101cfa(param_1);
  return;
}




void FUN_00102d2b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101792(undefined8 param_1)

{
  return param_1;
}




void FUN_001019fa(void)

{
  FUN_001018cf();
  return;
}




void FUN_00102d80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101a86(undefined8 param_1)

{
  FUN_00101aa6(param_1);
  return;
}




undefined8 FUN_00102528(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00102516(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102a22(void)

{
  return 0;
}



