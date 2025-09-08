
void FUN_00101602(long param_1)

{
  FUN_00101624(param_1 + 0x10);
  return;
}




void FUN_00101e0a(undefined8 param_1,undefined8 param_2)

{
  FUN_001020ee(param_1,param_2);
  return;
}




void FUN_001020a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e63(param_2);
  uVar2 = FUN_00101552(param_1);
  FUN_00101bf2(param_1,uVar2,uVar1);
  return;
}




void FUN_0010228d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102330(param_1,param_2,0);
  return;
}




void FUN_001025d9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_0010269a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_0010309c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102134(undefined8 param_1)

{
  FUN_0010228d(param_1,1);
  return;
}




void FUN_001025ae(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001024d6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101ca4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101642(undefined8 param_1)

{
  return param_1;
}




void FUN_0010297b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001014f4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101552(param_1);
  FUN_0010159e(&local_18);
  FUN_001015c2(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001029b2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010297b,local_18);
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




void FUN_00101624(undefined8 param_1)

{
  FUN_00101642(param_1);
  return;
}




bool FUN_00102a7f(pthread_t *param_1)

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




undefined8 FUN_00102034(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00101f98(undefined8 param_1,undefined8 param_2)

{
  FUN_00102230(param_1,param_2);
  return;
}




long * FUN_0010159e(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101910(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102230(void)

{
  return;
}




void FUN_00102016(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101de8(void)

{
  return;
}




void FUN_00102330(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102392(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00101c53(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f6a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101cb6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fc2(param_2);
  FUN_00101fd4(param_1,uVar1);
  return;
}




void FUN_00102586(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102607(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102392(void)

{
  return 0x555555555555555;
}




void FUN_001019f2(undefined8 param_1)

{
  FUN_00101b64(param_1);
  return;
}




void FUN_00101a3e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101552(param_1);
  FUN_00101bf2(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_00101d3e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102016(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102918(void)

{
  return;
}




void FUN_00102bb4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001028f7(void)

{
  return;
}




void FUN_001023aa(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




int FUN_0010289b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101966(undefined8 param_1)

{
  FUN_001019c6(param_1);
  return;
}




undefined8 FUN_0010288c(void)

{
  return 0;
}




undefined8 * FUN_0010205a(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102923(void)

{
  return;
}




void FUN_00102939(void)

{
  return;
}




void FUN_001015c2(undefined8 *param_1)

{
  FUN_00101602(*param_1);
  return;
}




void FUN_00102480(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102158(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022bb(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102456(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102b76(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101654(void)

{
  long in_FS_OFFSET;
  FILE *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101986(local_58);
  local_60 = (FILE *)0x0;
                    /* try { // try from 00101692 to 001016e6 has its CatchHandler @ 00101732 */
  local_60 = fopen("file.txt","w+");
  FUN_00101a3e(local_58,&local_60);
  FUN_00101a3e(local_58,&local_60);
  FUN_00101a3e(local_58,&local_60);
  FUN_00101a78(local_38,local_58);
                    /* try { // try from 001016ee to 001016f2 has its CatchHandler @ 0010171d */
  FUN_00101489(local_38);
  FUN_001019a6(local_38);
  FUN_001019a6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102afd(undefined8 *param_1)

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




void FUN_00101d8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102034(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010207e(&local_18);
    FUN_001020a0(local_10,uVar2);
    FUN_0010205a(&local_18);
  }
  return;
}




void FUN_001028c0(void)

{
  return;
}




void FUN_001024ab(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001021d1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e63(param_3);
  FUN_001022ce(param_1,param_2,uVar1);
  return;
}




void FUN_001019a6(undefined8 param_1)

{
  FUN_00101a12(param_1);
  return;
}




void FUN_00101e34(undefined8 param_1,undefined8 param_2)

{
  FUN_00102101(param_1,param_2,1);
  return;
}




void FUN_001015e4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101b74(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101602(local_20);
    uVar3 = FUN_00101df8(param_1);
    FUN_00101e0a(uVar3,uVar2);
    FUN_00101e34(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102501(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001028b5(void)

{
  return;
}




void FUN_00102192(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102101(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102b95(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101f40(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




long FUN_0010220e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




undefined8 FUN_00101cee(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102016(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c50(void)

{
  return;
}




undefined8 FUN_00102380(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013d0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00102970(void)

{
  return;
}




void FUN_001014bb(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014f4(param_1);
  if ((FILE *)*puVar1 != (FILE *)0x0) {
    fclose((FILE *)*puVar1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00102101(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102266(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101874(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001023aa("Calling good()...");
  FUN_00101864();
  FUN_001023aa("Finished good()");
  FUN_001023aa("Calling bad()...");
  FUN_00101654();
  FUN_001023aa("Finished bad()");
  return 0;
}




void FUN_001022ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101e63(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018d9(8,param_2);
  *puVar2 = uVar1;
  return;
}




ulong FUN_0010279e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102be0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_001019c6(undefined8 param_1)

{
  FUN_00101b44(param_1);
  FUN_001018f0(param_1);
  return;
}




undefined8 FUN_0010287d(void)

{
  return 1;
}




undefined8 FUN_00101f6a(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f98(param_1,param_2);
  return param_1;
}




void FUN_00101bf2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e63(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e76(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f40(param_1,1);
  return;
}




void FUN_001018f0(undefined8 param_1)

{
  FUN_00101910(param_1);
  return;
}




void FUN_00102266(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001023d0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010242a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102244(long param_1)

{
  FUN_00102312(param_1 + 0x10);
  return;
}




undefined8 FUN_001022bb(undefined8 param_1)

{
  return param_1;
}




void FUN_0010290d(void)

{
  return;
}




void FUN_00101b44(undefined8 param_1)

{
  FUN_00101de8(param_1);
  return;
}




undefined8 FUN_00101df8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010252c(undefined4 param_1)

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




void FUN_0010294f(void)

{
  return;
}




undefined8 FUN_001018d9(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101864(void)

{
  FUN_0010175c();
  return;
}




void FUN_00102902(void)

{
  return;
}




undefined8 FUN_00101e63(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101ca4(param_2);
  FUN_00101c53(&local_21,uVar1);
  FUN_00101cb6(param_1,&local_21);
  FUN_001019f2(&local_21);
  uVar1 = FUN_00101d3e(param_2);
  uVar2 = FUN_00101cee(param_2);
                    /* try { // try from 00101b04 to 00101b08 has its CatchHandler @ 00101b0b */
  FUN_00101d8a(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102402(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102944(void)

{
  return;
}




void FUN_001028ec(void)

{
  return;
}




void FUN_0010292e(void)

{
  return;
}




void FUN_0010295a(void)

{
  return;
}




undefined8 FUN_00101552(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001015e4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010175c(void)

{
  long in_FS_OFFSET;
  FILE *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101986(local_58);
  local_60 = (FILE *)0x0;
                    /* try { // try from 0010179a to 001017ee has its CatchHandler @ 0010183a */
  local_60 = fopen("file.txt","w+");
  FUN_00101a3e(local_58,&local_60);
  FUN_00101a3e(local_58,&local_60);
  FUN_00101a3e(local_58,&local_60);
  FUN_00101a78(local_38,local_58);
                    /* try { // try from 001017f6 to 001017fa has its CatchHandler @ 00101825 */
  FUN_001014bb(local_38);
  FUN_001019a6(local_38);
  FUN_001019a6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00101986(undefined8 param_1)

{
  FUN_00101966(param_1);
  return;
}




void FUN_001020ee(void)

{
  return;
}




void FUN_001028d6(void)

{
  return;
}




void FUN_00102965(void)

{
  return;
}




void FUN_00101946(undefined8 param_1)

{
  FUN_001019f2(param_1);
  return;
}




void FUN_00101a12(undefined8 param_1)

{
  FUN_00101b74(param_1);
  FUN_00101946(param_1);
  return;
}




undefined8 FUN_00101e76(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102134(param_1);
  uVar2 = FUN_00101df8(param_1);
  FUN_00102158(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e63(param_2);
  uVar4 = FUN_00101602(uVar1);
  FUN_001021d1(uVar2,uVar4,uVar3);
  FUN_0010220e(local_38,0);
  FUN_00102192(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_0010207e(undefined8 *param_1)

{
  FUN_00102244(*param_1);
  return;
}




void FUN_0010263a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00102ada(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101b64(void)

{
  return;
}




void FUN_00101489(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014f4(param_1);
  fclose((FILE *)*puVar1);
  return;
}




void FUN_001028cb(void)

{
  return;
}




void FUN_001028e1(void)

{
  return;
}




void FUN_00101fd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fc2(param_2);
  FUN_00101f98(param_1,uVar1);
  FUN_001018f0(param_1);
  return;
}




undefined8 FUN_00101fc2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102312(undefined8 param_1)

{
  FUN_00102380(param_1);
  return;
}



