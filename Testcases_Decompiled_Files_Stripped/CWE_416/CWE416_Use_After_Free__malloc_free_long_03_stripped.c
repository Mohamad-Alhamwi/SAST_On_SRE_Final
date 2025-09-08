
void FUN_00101811(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ec4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e86(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101f60(void)

{
  return;
}




ulong FUN_00101aae(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c49(void)

{
  return;
}




void FUN_0010173a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c8b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101c80(void)

{
  return;
}




void FUN_001017e6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c5f(void)

{
  return;
}




undefined8 FUN_00101b9c(void)

{
  return 0;
}




undefined8 FUN_00101b8d(void)

{
  return 1;
}




void FUN_001015a3(void)

{
  undefined8 *puVar1;
  ulong local_18;
  
  puVar1 = (undefined8 *)malloc(800);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
    puVar1[local_18] = 5;
  }
  FUN_00101790(*puVar1);
  return;
}




void FUN_001016e0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010183c(undefined4 param_1)

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




void FUN_00101bdb(void)

{
  return;
}




void FUN_00101c1d(void)

{
  return;
}




bool FUN_00101d8f(pthread_t *param_1)

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




void FUN_00101c33(void)

{
  return;
}




void FUN_00101ef0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101bfc(void)

{
  return;
}




void FUN_001013c9(void)

{
  undefined8 *__ptr;
  ulong local_18;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
    __ptr[local_18] = 5;
  }
  free(__ptr);
  FUN_00101790(*__ptr);
  return;
}




void FUN_00101c6a(void)

{
  return;
}




void FUN_00101bf1(void)

{
  return;
}




undefined8 FUN_00101cc2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c8b,local_18);
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




undefined8 FUN_00101dea(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010144a(void)

{
  void *__ptr;
  undefined8 local_18;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
    *(undefined8 *)((long)__ptr + local_18 * 8) = 5;
  }
  free(__ptr);
  return;
}




int FUN_00101bab(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00104008);
    }
    FUN_00101310();
    DAT_00104018 = 1;
    return;
  }
  return;
}




ulong FUN_001019aa(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c07(void)

{
  return;
}




void FUN_00101618(void)

{
  FUN_0010144a();
  FUN_001014bc();
  FUN_0010152e();
  FUN_001015a3();
  return;
}




void FUN_00101917(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001018e9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c28(void)

{
  return;
}




undefined8 FUN_0010164b(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016ba("Calling good()...");
  FUN_00101618();
  FUN_001016ba("Finished good()");
  FUN_001016ba("Calling bad()...");
  FUN_001013c9();
  FUN_001016ba("Finished bad()");
  return 0;
}




void FUN_00101bc5(void)

{
  return;
}




void FUN_0010152e(void)

{
  undefined8 *puVar1;
  ulong local_18;
  
  puVar1 = (undefined8 *)malloc(800);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
    puVar1[local_18] = 5;
  }
  FUN_00101790(*puVar1);
  return;
}




void FUN_001016ba(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101712(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f28)();
  return;
}




void FUN_001018be(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101c54(void)

{
  return;
}




void FUN_00101be6(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101ea5(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101c75(void)

{
  return;
}




undefined8 FUN_00101e0d(undefined8 *param_1)

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




void FUN_001014bc(void)

{
  void *__ptr;
  undefined8 local_18;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
    *(undefined8 *)((long)__ptr + local_18 * 8) = 5;
  }
  free(__ptr);
  return;
}




void FUN_00101790(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c3e(void)

{
  return;
}




void FUN_00101bd0(void)

{
  return;
}




void FUN_00101896(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010194a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101766(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001017bb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c12(void)

{
  return;
}



