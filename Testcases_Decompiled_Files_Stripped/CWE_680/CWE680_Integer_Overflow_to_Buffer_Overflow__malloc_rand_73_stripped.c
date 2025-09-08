
undefined8 FUN_00101f25(undefined8 param_1)

{
  return param_1;
}




void FUN_001016f6(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a48(local_58);
  local_5c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_5c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_5c = rand();
    local_5c = local_5c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
                    /* try { // try from 0010177c to 001017b9 has its CatchHandler @ 00101805 */
  FUN_00101b00(local_58,&local_5c);
  FUN_00101b00(local_58,&local_5c);
  FUN_00101b00(local_58,&local_5c);
  FUN_00101b3a(local_38,local_58);
                    /* try { // try from 001017c1 to 001017c5 has its CatchHandler @ 001017f0 */
  FUN_00101469(local_38);
  FUN_00101a68(local_38);
  FUN_00101a68(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c06(undefined8 param_1)

{
  FUN_00101eaa(param_1);
  return;
}




void FUN_00102328(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f25(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f38(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102002(param_1,1);
  return;
}




void FUN_00102996(void)

{
  return;
}




void FUN_00102096(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102084(param_2);
  FUN_0010205a(param_1,uVar1);
  FUN_001019b2(param_1);
  return;
}




void FUN_00102a25(void)

{
  return;
}




void FUN_00102140(undefined8 *param_1)

{
  FUN_00102306(*param_1);
  return;
}




undefined8 FUN_00102a72(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a3b,local_18);
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




void FUN_001016a4(long param_1)

{
  FUN_001016c6(param_1 + 0x10);
  return;
}




ulong FUN_0010285e(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_0010237d(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00102254(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001021c3(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010234f(undefined8 param_1,undefined8 param_2)

{
  FUN_001023f0(param_1,param_2,0);
  return;
}




void FUN_00101a08(undefined8 param_1)

{
  FUN_00101ab4(param_1);
  return;
}




void FUN_00102a04(void)

{
  return;
}




void FUN_001029d8(void)

{
  return;
}




long FUN_001022d0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102490(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102d10(void)

{
  return;
}




void FUN_00102002(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_001029f9(void)

{
  return;
}




void FUN_00101eaa(void)

{
  return;
}




void FUN_00102980(void)

{
  return;
}




ulong FUN_0010275a(long param_1,ulong param_2,long param_3)

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




void FUN_00101a28(undefined8 param_1)

{
  FUN_00101a88(param_1);
  return;
}




undefined8 FUN_0010293d(void)

{
  return 1;
}




void FUN_00102596(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001025ec(undefined4 param_1)

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




int FUN_0010295b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101596(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001015f4(param_1);
  FUN_00101640(&local_18);
  FUN_00101664(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101eba(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001016e4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a68(undefined8 param_1)

{
  FUN_00101ad4(param_1);
  return;
}




void FUN_001024ea(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a0f(void)

{
  return;
}




void FUN_001022f2(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013b0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101a48(undefined8 param_1)

{
  FUN_00101a28(param_1);
  return;
}




void FUN_00101e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001020f6(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102140(&local_18);
    FUN_00102162(local_10,uVar2);
    FUN_0010211c(&local_18);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




bool FUN_00102b3f(pthread_t *param_1)

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




undefined8 FUN_00101d15(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010202c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00101f25(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_0010199b(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101b3a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101d66(param_2);
  FUN_00101d15(&local_21,uVar1);
  FUN_00101d78(param_1,&local_21);
  FUN_00101ab4(&local_21);
  uVar1 = FUN_00101e00(param_2);
  uVar2 = FUN_00101db0(param_2);
                    /* try { // try from 00101bc6 to 00101bca has its CatchHandler @ 00101bcd */
  FUN_00101e4c(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102975(void)

{
  return;
}




void FUN_00101b00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001015f4(param_1);
  FUN_00101cb4(param_1,uVar1,param_2);
  return;
}




void FUN_00102c36(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101ad4(undefined8 param_1)

{
  FUN_00101c36(param_1);
  FUN_00101a08(param_1);
  return;
}




void FUN_00101c36(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016a4(local_20);
    uVar3 = FUN_00101eba(param_1);
    FUN_00101ecc(uVar3,uVar2);
    FUN_00101ef6(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101686(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101936(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010246a("Calling good()...");
  FUN_00101926();
  FUN_0010246a("Finished good()");
  FUN_0010246a("Calling bad()...");
  FUN_001016f6();
  FUN_0010246a("Finished bad()");
  return 0;
}




long * FUN_00101640(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00102bbd(undefined8 *param_1)

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




void FUN_00102540(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001029a1(void)

{
  return;
}




void FUN_00102306(long param_1)

{
  FUN_001023d2(param_1 + 0x10);
  return;
}




void FUN_001026c7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101926(void)

{
  FUN_0010182f();
  return;
}




void FUN_001014ff(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00101596(param_1);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_001024c2(*__ptr);
  free(__ptr);
  return;
}




void FUN_001016c6(undefined8 param_1)

{
  FUN_001016e4(param_1);
  return;
}




void FUN_00101d78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102084(param_2);
  FUN_00102096(param_1,uVar1);
  return;
}




undefined8 FUN_00101db0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020d8(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a88(undefined8 param_1)

{
  FUN_00101c06(param_1);
  FUN_001019b2(param_1);
  return;
}




void FUN_00101ef6(undefined8 param_1,undefined8 param_2)

{
  FUN_001021c3(param_1,param_2,1);
  return;
}




undefined8 FUN_00102b9a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001029c2(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00102ca0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_0010202c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010205a(param_1,param_2);
  return param_1;
}




undefined8 FUN_0010294c(void)

{
  return 0;
}




void FUN_00101664(undefined8 *param_1)

{
  FUN_001016a4(*param_1);
  return;
}




void FUN_00101ecc(undefined8 param_1,undefined8 param_2)

{
  FUN_001021b0(param_1,param_2);
  return;
}




void FUN_001021c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102328(param_1,param_2,param_3);
  return;
}




void FUN_0010221a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010237d(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 * FUN_0010211c(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102a3b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102440(undefined8 param_1)

{
  return param_1;
}




void FUN_001021b0(void)

{
  return;
}




void FUN_0010256b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001029cd(void)

{
  return;
}




undefined8 FUN_0010199b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102084(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001020f6(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_0010246a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001026fa(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010266e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010298b(void)

{
  return;
}




void FUN_0010182f(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a48(local_58);
  local_5c = 0x14;
                    /* try { // try from 00101873 to 001018b0 has its CatchHandler @ 001018fc */
  FUN_00101b00(local_58,&local_5c);
  FUN_00101b00(local_58,&local_5c);
  FUN_00101b00(local_58,&local_5c);
  FUN_00101b3a(local_38,local_58);
                    /* try { // try from 001018b8 to 001018bc has its CatchHandler @ 001018e7 */
  FUN_001014ff(local_38);
  FUN_00101a68(local_38);
  FUN_00101a68(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102452(void)

{
  return 0x555555555555555;
}




void FUN_001023f0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102452(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00101d66(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e00(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020d8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001029ac(void)

{
  return;
}




void FUN_00102646(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102c74(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001019b2(undefined8 param_1)

{
  FUN_001019d2(param_1);
  return;
}




void FUN_00101c26(void)

{
  return;
}




void FUN_00102c55(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102293(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f25(param_3);
  FUN_00102390(param_1,param_2,uVar1);
  return;
}




void FUN_001023d2(undefined8 param_1)

{
  FUN_00102440(param_1);
  return;
}




void FUN_00102162(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f25(param_2);
  uVar2 = FUN_001015f4(param_1);
  FUN_00101cb4(param_1,uVar2,uVar1);
  return;
}




void FUN_00102516(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102a30(void)

{
  return;
}




void FUN_001019d2(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001024c2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001025c1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001029b7(void)

{
  return;
}




void FUN_00102a1a(void)

{
  return;
}




void FUN_00102699(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101ab4(undefined8 param_1)

{
  FUN_00101c26(param_1);
  return;
}




undefined8 FUN_001015f4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101686(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001021f6(undefined8 param_1)

{
  FUN_0010234f(param_1,1);
  return;
}




void FUN_00101469(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00101596(param_1);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_001024c2(*__ptr);
  free(__ptr);
  return;
}




undefined8 FUN_00101f38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001021f6(param_1);
  uVar2 = FUN_00101eba(param_1);
  FUN_0010221a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f25(param_2);
  uVar4 = FUN_001016a4(uVar1);
  FUN_00102293(uVar2,uVar4,uVar3);
  FUN_001022d0(local_38,0);
  FUN_00102254(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_0010205a(undefined8 param_1,undefined8 param_2)

{
  FUN_001022f2(param_1,param_2);
  return;
}




void FUN_001020d8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001029ee(void)

{
  return;
}




void FUN_001029e3(void)

{
  return;
}



