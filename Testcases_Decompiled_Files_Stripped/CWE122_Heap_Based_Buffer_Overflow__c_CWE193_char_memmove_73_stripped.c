
void FUN_001019ac(undefined8 param_1)

{
  FUN_00101c9c(param_1);
  return;
}




void FUN_001016cd(void)

{
  FUN_001015bb();
  return;
}




void FUN_00101e8c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102142(param_1,param_2);
  return;
}




void FUN_00101758(undefined8 param_1)

{
  FUN_00101778(param_1);
  return;
}




void FUN_00102488(undefined8 *param_1)

{
  FUN_00101cac(*param_1);
  return;
}




undefined8 FUN_00101b58(undefined8 param_1)

{
  return param_1;
}




void FUN_001026d8(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001029d5(void)

{
  return;
}




undefined8 FUN_00102bfc(undefined8 *param_1)

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




void FUN_00102cb3(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101c3e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101f28(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101f72(&local_18);
    FUN_00101f94(local_10,uVar2);
    FUN_00101f4e(&local_18);
  }
  return;
}




ulong FUN_00102799(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102bd9(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102a6f(void)

{
  return;
}




void FUN_00102254(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001022b6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101ec8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101eb6(param_2);
  FUN_00101e8c(param_1,uVar1);
  FUN_00101758(param_1);
  return;
}




void FUN_00101d3a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101eb6(undefined8 param_1)

{
  return param_1;
}




void FUN_0010262b(undefined4 param_1)

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




void FUN_0010257f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101d6a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102046(param_1);
  uVar2 = FUN_00101cce(param_1);
  FUN_0010206a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101d58(param_2);
  uVar4 = FUN_00101cac(uVar1);
  FUN_001020e3(uVar2,uVar4,uVar3);
  FUN_00102120(local_38,0);
  FUN_001020a4(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102000(void)

{
  return;
}




void FUN_001029b4(void)

{
  return;
}




void FUN_001019dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101cac(local_20);
    uVar3 = FUN_00101cce(param_1);
    FUN_00101ce0(uVar3,uVar2);
    FUN_00101d0a(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102600(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010185a(undefined8 param_1)

{
  FUN_001019cc(param_1);
  return;
}




void FUN_00102406(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101a5a(param_1);
  FUN_00102464(&local_18);
  FUN_00102488(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a01(void)

{
  return;
}




void FUN_00102236(undefined8 param_1)

{
  FUN_001022a4(param_1);
  return;
}




undefined8 FUN_001022a4(undefined8 param_1)

{
  return param_1;
}




bool FUN_00102b7e(pthread_t *param_1)

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




void FUN_00102c75(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102a17(void)

{
  return;
}




long FUN_00102120(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102156(long param_1)

{
  FUN_00102236(param_1 + 0x10);
  return;
}




void FUN_001022ce(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00102406(param_1);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memmove(__dest,local_1b,sVar2 + 1);
  FUN_001024a9(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010187a(undefined8 param_1)

{
  FUN_001019dc(param_1);
  FUN_001017ae(param_1);
  return;
}




void FUN_00102a22(void)

{
  return;
}




void FUN_00102046(undefined8 param_1)

{
  FUN_001021b1(param_1,1);
  return;
}




void FUN_00102685(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e34(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




void FUN_0010182e(undefined8 param_1)

{
  FUN_001019ac(param_1);
  FUN_00101758(param_1);
  return;
}




void FUN_00102a59(void)

{
  return;
}




ulong FUN_0010289d(long param_1,ulong param_2,long param_3)

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




void FUN_00102a4e(void)

{
  return;
}




void FUN_00101778(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101f0a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001015bb(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017ee(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(0xb);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 0010161a to 00101657 has its CatchHandler @ 001016a3 */
  FUN_001018a6(local_58,&local_60);
  FUN_001018a6(local_58,&local_60);
  FUN_001018a6(local_58,&local_60);
  FUN_001018e0(local_38,local_58);
                    /* try { // try from 0010165f to 00101663 has its CatchHandler @ 0010168e */
  FUN_0010236a(local_38);
  FUN_0010180e(local_38);
  FUN_0010180e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010236a(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00102406(param_1);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memmove(__dest,local_1b,sVar2 + 1);
  FUN_001024a9(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001014a9(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017ee(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(10);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 00101508 to 00101545 has its CatchHandler @ 00101591 */
  FUN_001018a6(local_58,&local_60);
  FUN_001018a6(local_58,&local_60);
  FUN_001018a6(local_58,&local_60);
  FUN_001018e0(local_38,local_58);
                    /* try { // try from 0010154d to 00101551 has its CatchHandler @ 0010157c */
  FUN_001022ce(local_38);
  FUN_0010180e(local_38);
  FUN_0010180e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013f0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101742(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102a64(void)

{
  return;
}




undefined8 FUN_0010298b(void)

{
  return 0;
}




void FUN_001020a4(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102013(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001024a9(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101e5e(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e8c(param_1,param_2);
  return param_1;
}




undefined8 FUN_001021df(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a7a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001017ce(undefined8 param_1)

{
  FUN_0010182e(param_1);
  return;
}




void FUN_001017ee(undefined8 param_1)

{
  FUN_001017ce(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_001018e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101b58(param_2);
  FUN_00101b07(&local_21,uVar1);
  FUN_00101b6a(param_1,&local_21);
  FUN_0010185a(&local_21);
  uVar1 = FUN_00101bf2(param_2);
  uVar2 = FUN_00101ba2(param_2);
                    /* try { // try from 0010196c to 00101970 has its CatchHandler @ 00101973 */
  FUN_00101c3e(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010297c(void)

{
  return 1;
}




void FUN_00102529(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




int FUN_0010299a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101a5a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d3a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001022b6(void)

{
  return 0x555555555555555;
}




void FUN_00102a0c(void)

{
  return;
}




void FUN_001018a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101a5a(param_1);
  FUN_00101aa6(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_00101cce(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d0a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102013(param_1,param_2,1);
  return;
}




undefined8 FUN_00101bf2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f0a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102739(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101f72(undefined8 *param_1)

{
  FUN_00102156(*param_1);
  return;
}




void FUN_001029eb(void)

{
  return;
}




void FUN_00102ce0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101cac(long param_1)

{
  FUN_00101fe2(param_1 + 0x10);
  return;
}




void FUN_001020e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d58(param_3);
  FUN_001021f2(param_1,param_2,uVar1);
  return;
}




void FUN_00102d50(void)

{
  return;
}




void FUN_00102555(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101b07(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e5e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101ba2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f0a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101fe2(undefined8 param_1)

{
  FUN_00102178(param_1);
  return;
}




void FUN_001021f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101d58(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101742(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001029ca(void)

{
  return;
}




void FUN_00102a2d(void)

{
  return;
}




void FUN_00102a43(void)

{
  return;
}




void FUN_001029bf(void)

{
  return;
}




void FUN_001029e0(void)

{
  return;
}




void FUN_0010218a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




long * FUN_00102464(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00102ab1(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a7a,local_18);
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




void FUN_00101f94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d58(param_2);
  uVar2 = FUN_00101a5a(param_1);
  FUN_00101aa6(param_1,uVar2,uVar1);
  return;
}




undefined8 * FUN_00101f4e(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001017ae(undefined8 param_1)

{
  FUN_0010185a(param_1);
  return;
}




void FUN_0010180e(undefined8 param_1)

{
  FUN_0010187a(param_1);
  return;
}




void FUN_001024cf(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102178(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a38(void)

{
  return;
}




undefined8 FUN_001016dd(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024a9("Calling good()...");
  FUN_001016cd();
  FUN_001024a9("Finished good()");
  FUN_001024a9("Calling bad()...");
  FUN_001014a9();
  FUN_001024a9("Finished bad()");
  return 0;
}




undefined8 FUN_00101d58(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f28(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00101c9c(void)

{
  return;
}




void FUN_0010206a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021df(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102706(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102013(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010218a(param_1,param_2,param_3);
  return;
}




void FUN_00102142(void)

{
  return;
}




void FUN_00102501(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001026ad(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102c94(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001021b1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102254(param_1,param_2,0);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_00101ce0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102000(param_1,param_2);
  return;
}




void FUN_001019cc(void)

{
  return;
}




void FUN_00101aa6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101d58(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d6a(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101e34(param_1,1);
  return;
}




void FUN_00101b6a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101eb6(param_2);
  FUN_00101ec8(param_1,uVar1);
  return;
}




void FUN_001025d5(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001025aa(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001029f6(void)

{
  return;
}



