
void FUN_00101d14(void)

{
  return;
}




void FUN_00101770(void)

{
  FUN_00101514();
  FUN_00101649();
  return;
}




void FUN_00101d6c(void)

{
  return;
}




void FUN_00102008(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00101bf2(long param_1,ulong param_2,long param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00101d09(void)

{
  return;
}




void FUN_001020b0(void)

{
  return;
}




void FUN_00101d82(void)

{
  return;
}




void FUN_00101d77(void)

{
  return;
}




void FUN_001019da(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101a8e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d1f(void)

{
  return;
}




void FUN_00101dae(void)

{
  return;
}




undefined8 FUN_00101f2e(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101fca(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101dcf(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001018ff(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101dc4(void)

{
  return;
}




void FUN_0010192a(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d8d(void)

{
  return;
}




void FUN_001018d4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d61(void)

{
  return;
}




undefined8 FUN_00101e06(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101dcf,local_18);
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




void FUN_00101a02(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d4b(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101d40(void)

{
  return;
}




void FUN_00101856(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101f51(undefined8 *param_1)

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




void FUN_00101a2d(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001013e9(void)

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
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x10149f;
  memset((void *)((ulong)((long)ppcVar3 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_80 + 99) = 0;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x1014b4;
  iVar2 = FUN_00101cd1();
  if (iVar2 != 0) {
    local_88 = (char *)((long)local_80 + -8);
  }
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x1014da;
  memset(local_78,0x43,99);
  pcVar1 = local_88;
  local_15 = 0;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x1014f1;
  strcpy(pcVar1,local_78);
  pcVar1 = local_88;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x1014fd;
  FUN_001017fe(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101512;
  __stack_chk_fail();
}




void FUN_00101d98(void)

{
  return;
}




void FUN_00101514(void)

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
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x1015ca;
  memset((char *)((ulong)((long)ppcVar3 + -0x61) & 0xfffffffffffffff0),0x41,99);
  local_80[99] = '\0';
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x1015df;
  iVar2 = FUN_00101ce0();
  if (iVar2 == 0) {
    local_88 = local_80;
  }
  else {
    *(undefined8 *)((long)ppcVar3 + -0x78) = 0x1015ef;
    FUN_001017fe("Benign, fixed string");
  }
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x10160f;
  memset(local_78,0x43,99);
  pcVar1 = local_88;
  local_15 = 0;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101626;
  strcpy(pcVar1,local_78);
  pcVar1 = local_88;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101632;
  FUN_001017fe(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101647;
  __stack_chk_fail();
}




void FUN_00101649(void)

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
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x1016ff;
  memset((char *)((ulong)((long)ppcVar3 + -0x61) & 0xfffffffffffffff0),0x41,99);
  local_80[99] = '\0';
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101714;
  iVar2 = FUN_00101cd1();
  if (iVar2 != 0) {
    local_88 = local_80;
  }
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101736;
  memset(local_78,0x43,99);
  pcVar1 = local_88;
  local_15 = 0;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x10174d;
  strcpy(pcVar1,local_78);
  pcVar1 = local_88;
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x101759;
  FUN_001017fe(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar3 + -0x78) = 0x10176e;
  __stack_chk_fail();
}




undefined8 FUN_0010178f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017fe("Calling good()...");
  FUN_00101770();
  FUN_001017fe("Finished good()");
  FUN_001017fe("Calling bad()...");
  FUN_001013e9();
  FUN_001017fe("Finished bad()");
  return 0;
}




void FUN_00101980(undefined4 param_1)

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




void FUN_00101824(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101a5b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_00101aee(long param_1,ulong param_2,long param_3)

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




void FUN_001017fe(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d35(void)

{
  return;
}




void FUN_00102040(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101db9(void)

{
  return;
}




void FUN_001018aa(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010187e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101955(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
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




undefined8 FUN_00101ce0(void)

{
  return 0;
}




void FUN_00101fe9(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_00101da3(void)

{
  return;
}




void FUN_00101d2a(void)

{
  return;
}




void FUN_00101d56(void)

{
  return;
}




undefined8 FUN_00101cd1(void)

{
  return 1;
}




int FUN_00101cef(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




bool FUN_00101ed3(pthread_t *param_1)

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



