
void FUN_00101a20(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00102060(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




int FUN_00101d0d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101dcc(void)

{
  return;
}




void FUN_0010191d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101f4c(void *param_1)

{
  free(param_1);
  return 1;
}




bool FUN_00101ef1(pthread_t *param_1)

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




void FUN_001019f8(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101de2(void)

{
  return;
}




void FUN_00101d32(void)

{
  return;
}




void FUN_00101d27(void)

{
  return;
}




void FUN_0010181c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001018c8(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101a4b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101d5e(void)

{
  return;
}




void FUN_00101da0(void)

{
  return;
}




void FUN_00101fe8(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101db6(void)

{
  return;
}




void FUN_00101d7f(void)

{
  return;
}




void FUN_00101532(void)

{
  char *pcVar1;
  int iVar2;
  char **ppcVar3;
  long in_FS_OFFSET;
  char *local_88;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppcVar3 = &local_88; ppcVar3 != &local_88; ppcVar3 = (char **)((long)ppcVar3 + -0x1000)) {
    *(undefined8 *)((long)ppcVar3 + -8) = *(undefined8 *)((long)ppcVar3 + -8);
  }
  *(undefined8 *)((long)ppcVar3 + -8) = *(undefined8 *)((long)ppcVar3 + -8);
  local_80 = (char *)((ulong)((long)ppcVar3 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x1015e8;
  memset((char *)((ulong)((long)ppcVar3 + -0x61) & 0xfffffffffffffff0),0x41,99);
  local_80[99] = '\0';
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x1015fd;
  iVar2 = FUN_001013f8();
  if (iVar2 == 0) {
    local_88 = local_80;
  }
  else {
    *(undefined8 *)((long)ppcVar3 + -0x78) = 0x10160d;
    FUN_0010181c("Benign, fixed string");
  }
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x10162d;
  memset(local_78,0x43,99);
  pcVar1 = local_88;
  local_15 = 0;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101644;
  strcpy(pcVar1,local_78);
  pcVar1 = local_88;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101650;
  FUN_0010181c(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101665;
  __stack_chk_fail();
}




void FUN_00101ded(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d74(void)

{
  return;
}




undefined8 FUN_00101f6f(undefined8 *param_1)

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




void FUN_00102007(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101667(void)

{
  char *pcVar1;
  int iVar2;
  char **ppcVar3;
  long in_FS_OFFSET;
  char *local_88;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppcVar3 = &local_88; ppcVar3 != &local_88; ppcVar3 = (char **)((long)ppcVar3 + -0x1000)) {
    *(undefined8 *)((long)ppcVar3 + -8) = *(undefined8 *)((long)ppcVar3 + -8);
  }
  *(undefined8 *)((long)ppcVar3 + -8) = *(undefined8 *)((long)ppcVar3 + -8);
  local_80 = (char *)((ulong)((long)ppcVar3 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x10171d;
  memset((char *)((ulong)((long)ppcVar3 + -0x61) & 0xfffffffffffffff0),0x41,99);
  local_80[99] = '\0';
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101732;
  iVar2 = FUN_001013e9();
  if (iVar2 != 0) {
    local_88 = local_80;
  }
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101754;
  memset(local_78,0x43,99);
  pcVar1 = local_88;
  local_15 = 0;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x10176b;
  strcpy(pcVar1,local_78);
  pcVar1 = local_88;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101777;
  FUN_0010181c(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x10178c;
  __stack_chk_fail();
}




void FUN_00101d3d(void)

{
  return;
}




void FUN_00101407(void)

{
  char *pcVar1;
  int iVar2;
  char **ppcVar3;
  long in_FS_OFFSET;
  char *local_88;
  void *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppcVar3 = &local_88; ppcVar3 != &local_88; ppcVar3 = (char **)((long)ppcVar3 + -0x1000)) {
    *(undefined8 *)((long)ppcVar3 + -8) = *(undefined8 *)((long)ppcVar3 + -8);
  }
  *(undefined8 *)((long)ppcVar3 + -8) = *(undefined8 *)((long)ppcVar3 + -8);
  local_80 = (void *)((ulong)((long)ppcVar3 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x1014bd;
  memset((void *)((ulong)((long)ppcVar3 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_80 + 99) = 0;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x1014d2;
  iVar2 = FUN_001013e9();
  if (iVar2 != 0) {
    local_88 = (char *)((long)local_80 + -8);
  }
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x1014f8;
  memset(local_78,0x43,99);
  pcVar1 = local_88;
  local_15 = 0;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x10150f;
  strcpy(pcVar1,local_78);
  pcVar1 = local_88;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x10151b;
  FUN_0010181c(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101530;
  __stack_chk_fail();
}




undefined8 FUN_00101cfe(void)

{
  return 0;
}




void FUN_00101d8a(void)

{
  return;
}




void FUN_00101842(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




ulong FUN_00101c10(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00101b0c(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101190(PTR_LOOP_00105008);
    }
    FUN_00101330();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101dab(void)

{
  return;
}




void FUN_00101874(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101d48(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




undefined8 FUN_001017ad(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010181c("Calling good()...");
  FUN_0010178e();
  FUN_0010181c("Finished good()");
  FUN_0010181c("Calling bad()...");
  FUN_00101407();
  FUN_0010181c("Finished bad()");
  return 0;
}




void FUN_0010189c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_001018f2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101aac(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101dd7(void)

{
  return;
}




void FUN_00101d69(void)

{
  return;
}




undefined8 FUN_001013f8(void)

{
  return 0;
}




void FUN_001020d0(void)

{
  return;
}




undefined8 FUN_001013e9(void)

{
  return 1;
}




undefined8 FUN_00101e24(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101ded,local_18);
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




void FUN_00102026(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010178e(void)

{
  FUN_00101532();
  FUN_00101667();
  return;
}




void FUN_00101973(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101dc1(void)

{
  return;
}




void FUN_00101d53(void)

{
  return;
}




void FUN_00101a79(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101cef(void)

{
  return 1;
}




void FUN_00101948(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010199e(undefined4 param_1)

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




void FUN_00101d95(void)

{
  return;
}



